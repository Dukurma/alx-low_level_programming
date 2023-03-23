#!/bin/bash
wget -P /tmp https://github.com/Dukurma/alx-low_level_programming/raw/master/0x18-dynamic_libraries/potofgold.so
export LD_PRELOAD=/tmp/potofgold.so
