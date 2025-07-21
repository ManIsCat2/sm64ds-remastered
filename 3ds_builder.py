#!/usr/bin/env python3

import os

os.system('make clean')
os.system('make TARGET_N3DS=1 -j2')