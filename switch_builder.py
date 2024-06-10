#!/usr/bin/env python3

import os

os.system('make clean')
os.system('make TARGET_SWITCH=1 -j2')