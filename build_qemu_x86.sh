#!/bin/bash

west build --pristine always --board qemu_x86 $1 -- -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
cp build/compile_commands.json ./
