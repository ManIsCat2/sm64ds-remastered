#!/usr/bin/env python3

import os

os.system('export PATH="$PATH:/opt/devkitpro/tools/bin" && echo "Adding paths..."')
os.system('export DEVKITPRO=/opt/devkitpro')
os.system('export DEVKITARM=/opt/devkitpro/devkitARM')
os.system('DEVKITPPC=/opt/devkitpro/devkitPPC && echo "Paths added!"')
os.system('echo "Updating Pacman" && pacman -Syuu --noconfirm')
os.system('echo "Downloading 3DS/DevkitPro dependencies" && pacman -S unzip make git mingw-w64-i686-gcc mingw-w64-x86_64-gcc mingw-w64-i686-glew mingw-w64-x86_64-glew mingw-w64-i686-SDL2 mingw-w64-i686-SDL mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL python3 --noconfirm')
os.system('echo "Recieving Key..." && pacman-key --recv BC26F752D25B92CE272E0F44F7FD5492264BB9D0 --keyserver keyserver.ubuntu.com')
os.system('echo "Signing Key..." && pacman-key --lsign BC26F752D25B92CE272E0F44F7FD5492264BB9D0')
os.system('pacman -U --noconfirm https://downloads.devkitpro.org/devkitpro-keyring.pkg.tar.xz')
os.system('echo "Adding Devkit libraries to mingw64" && cat <<EOF >> /etc/pacman.conf\n\
[dkp-libs]\n\
Server = https://downloads.devkitpro.org/packages\n\
[dkp-windows]\n\
Server = https://downloads.devkitpro.org/packages/windows\n\
EOF')
os.system('echo "Updating Pacman" && pacman -Syu --noconfirm')
os.system('echo "Downloading 3DS exclusive dependencies" && pacman -S 3ds-dev git make python3 mingw-w64-x86_64-gcc unzip --noconfirm')
os.system('wget https://github.com/3DSGuy/Project_CTR/releases/download/makerom-v0.17/makerom-v0.17-win_x86_64.zip')
os.system('unzip -d /opt/devkitpro/tools/bin/ makerom-v0.17-win_x86_64.zip')