#!/usr/bin/env bash
set -e
CAR=${1:?usage: ./build.sh <car>}
cmake -B build -DVEHICLE=$CAR -DCMAKE_BUILD_TYPE=Release > /dev/null
cmake --build build -j"$(nproc)" > /dev/null
echo "[OK] build for $CAR"
