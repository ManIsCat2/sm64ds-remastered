#!/usr/bin/env python3

import os

os.system('export PATH="$PATH:/opt/devkitpro/tools/bin" && echo "Adding paths..."')
os.system('export DEVKITPRO=/opt/devkitpro')
os.system('export DEVKITARM=/opt/devkitpro/devkitARM')
os.system('DEVKITPPC=/opt/devkitpro/devkitPPC && echo "Paths added!"')
os.system('echo "Downloading Switch/DevkitPro dependencies..." && pacman -S devkitA64 dkp-toolchain-vars switch-dev libnx switch-tools switch-mesa switch-libdrm_nouveau switch-sdl2 --noconfirm')
os.system('echo "Updating Pacman" && pacman -Syu --noconfirm')