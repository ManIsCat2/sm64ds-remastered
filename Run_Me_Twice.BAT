@echo off
setlocal

:: Set installation directory for MSYS2
set MSYS2_DIR=C:\msys64
set MSYS2_INSTALLER=msys2-x86_64-20241208.exe
set MSYS2_URL=https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe

:: Set GitHub repo details
set REPO_URL=https://github.com/ExcellentGamer/sm64ds-remastered.git
set CLONE_DIR=%CD%\sm64ds-remastered
set BUILD_SCRIPT=COMPILE_BUILD.SH

:: Check if MSYS2 is installed
if not exist "%MSYS2_DIR%\mingw64.exe" (
    echo MSYS2 not found. Downloading and installing...
    
    :: Download the correct MSYS2 installer
    curl -L -o %MSYS2_INSTALLER% %MSYS2_URL%
    
    if exist %MSYS2_INSTALLER% (
        echo Running MSYS2 installer...
        start /wait %MSYS2_INSTALLER% install --confirm-command --accept-messages --root %MSYS2_DIR%
        del %MSYS2_INSTALLER%
    ) else (
        echo Failed to download MSYS2 installer. Check your internet connection.
        pause
        exit /b 1
    )
) else (
    echo MSYS2 is already installed.
)

:: Check if Git is installed
where git >nul 2>nul
if %errorlevel% neq 0 (
    echo Git is not installed. Please install Git and rerun this script.
    pause
    exit /b 1
)

:: Clone the repo if it does not exist, otherwise check for updates
if not exist "%CLONE_DIR%" (
    echo Cloning repository into %CLONE_DIR%...
    git clone %REPO_URL% "%CLONE_DIR%"
) else (
    echo Repository already cloned. Checking for updates...
    cd /d "%CLONE_DIR%"
    git fetch origin
    git status | findstr /C:"Your branch is behind" >nul
    if %errorlevel% equ 0 (
        echo Updates available. Pulling latest changes...
        git pull origin main
    ) else (
        echo Repository is already up to date.
    )
)

:: Verify that the build script exists
if not exist "%CLONE_DIR%\%BUILD_SCRIPT%" (
    echo ERROR: %BUILD_SCRIPT% not found in the repository.
    pause
    exit /b 1
)

:: Start MSYS2 MINGW64, cd into repo, run COMPILE_BUILD.SH, and keep the terminal open
echo Starting MSYS2 MINGW64...
start "" "%MSYS2_DIR%\mingw64.exe" bash --login -c "cd '%CLONE_DIR%' && ./%BUILD_SCRIPT%; exec bash"

pause
endlocal
exit
