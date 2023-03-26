#!/bin/bash
wget -P .. https://github.com/iamnotnato/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gm
export LD_PRELOAD="$PWD/../libgiga.so"
