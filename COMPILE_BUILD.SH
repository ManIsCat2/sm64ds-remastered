#!/bin/bash

# Ensure the script is running inside MSYS2 (MINGW64)
if [[ "$MSYSTEM" != "MINGW64" ]]; then
    echo "Please run this script inside an MSYS2 MINGW64 shell!"
    exit 1
fi

# Set up devkitPro environment variables
export DEVKITPRO=/opt/devkitpro
export DEVKITARM=/opt/devkitpro/devkitARM
export DEVKITPPC=/opt/devkitpro/devkitPPC
export DEVKITA64=/opt/devkitpro/devkitA64
export PATH="$PATH:/opt/devkitpro/tools/bin"

# Check if baserom is present
if [ ! -f "baserom.us.z64" ]; then
    echo "Baserom not found! Please rename your Super Mario 64 ROM to baserom.us.z64."
    read -p "Press Enter once you have renamed the file..."
    if [ ! -f "baserom.us.z64" ]; then
        echo "Baserom still not found. Exiting."
        exit 1
    fi
fi

# Update system
pacman -Syuu --noconfirm

# Add devkitPro keyring and repository
pacman-key --recv BC26F752D25B92CE272E0F44F7FD5492264BB9D0 --keyserver keyserver.ubuntu.com
pacman-key --lsign BC26F752D25B92CE272E0F44F7FD5492264BB9D0
pacman -U --noconfirm https://downloads.devkitpro.org/devkitpro-keyring.pkg.tar.xz

echo -e "[dkp-libs]\nServer = https://downloads.devkitpro.org/packages\n[dkp-windows]\nServer = https://downloads.devkitpro.org/packages/windows" | tee -a /etc/pacman.conf

# Update package lists after adding repository
pacman -Syuu --noconfirm

# Function to check and install missing dependencies
dependencies=("unzip" "make" "git" "mingw-w64-x86_64-gcc" "mingw-w64-x86_64-glew" "mingw-w64-x86_64-SDL2" "mingw-w64-x86_64-SDL" "python3" "pkgconf" "switch-dev" "libnx" "switch-tools" "switch-mesa" "switch-libdrm_nouveau" "switch-sdl2" "devkitPPC" "wiiu-sdl2" "wiiu-dev" "devkitA64" "devkitARM" "libctru" "base-devel")
missing_packages=()

for package in "${dependencies[@]}"; do
    if ! pacman -Q $package &>/dev/null; then
        missing_packages+=("$package")
    fi
done

if [ ${#missing_packages[@]} -ne 0 ]; then
    echo "Installing missing dependencies: ${missing_packages[@]}"
    pacman -S "${missing_packages[@]}" --noconfirm
else
    echo "All dependencies are already installed."
fi

while true; do
    # Prompt user for build target
    echo "Select the build target:"
    echo "1. Windows"
    echo "2. Nintendo Switch"
    echo "3. Wii U"
    echo "4. 3DS"
    echo "5. N64"
    read -rp "Enter the number corresponding to your build target: " BuildChoice

    case $BuildChoice in
        1) BuildCommand="make -j16" ;;
        2) BuildCommand="make TARGET_SWITCH=1 -j16" ;;
        3) BuildCommand="make TARGET_WII_U=1 -j16" ;;
        4) 
            if [ ! -f "/opt/devkitpro/devkitARM/bin/arm-none-eabi-cpp" ]; then
                echo "Missing arm-none-eabi-cpp, reinstalling devkitARM and libctru..."
                pacman -S devkitARM libctru --noconfirm
            fi
            BuildCommand="make TARGET_N3DS=1 -j16" ;;
        *) echo "Invalid selection."; continue ;;
    esac

    # Ensure required directories exist
    if [[ "$BuildChoice" == "3" ]]; then
        if [ ! -d "/opt/devkitpro/devkitPPC/base_tools" ]; then
            echo "Missing devkitPPC base tools, reinstalling..."
            pacman -S devkitPPC --noconfirm
        fi
    fi

    # Fix missing base tools for Wii U build
    if [[ "$BuildChoice" == "3" ]]; then
        if [ ! -d "/opt/devkitpro/devkitPPC/bin" ]; then
            echo "Missing devkitPPC binaries, reinstalling..."
            pacman -S devkitPPC --noconfirm
        fi
    fi

    # Execute the build command
    echo "Starting the build process..."
    cd "$(dirname "$0")"  # Ensure the script runs in the correct directory
    $BuildCommand

    # Ask if the user wants to build another copy
    read -rp "Would you like to build another copy? (y/n): " RepeatChoice
    if [[ "$RepeatChoice" != "y" ]]; then
        break
    fi

done

# Make script executable and allow double-click execution
if [[ "$OSTYPE" == "msys" ]]; then
    chmod +x "$0"
    echo "You can now double-click this script to execute it."
fi
