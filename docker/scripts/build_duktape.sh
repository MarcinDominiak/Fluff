#!/bin/bash

echo "[*] Creating build directory"
mkdir /home/build/fluff/build
cd /home/build/fluff/src
echo "[*] Building fluff_duktape"
bazel build --show_result=0 --noshow_progress --cxxopt='-std=c++17' --test_output=errors --action_env="GTEST_COLOR=1" :fluff_duktape
if [ $? -ne 0 ]; then exit 1; fi
echo "[*] Building fluff_duktape_dry"
bazel build --show_result=0 --noshow_progress --cxxopt='-std=c++17' --test_output=errors --action_env="GTEST_COLOR=1" :fluff_duktape_dry
if [ $? -ne 0 ]; then exit 1; fi
cp /home/build/fluff/src/bazel-bin/fluff_duktape /home/build/fluff/build
cp /home/build/fluff/src/bazel-bin/fluff_duktape_dry /home/build/fluff/build
cp -R /home/build/fluff/src/grammars /home/build/fluff/build
cp -R /usr/lib/duktape /home/build/fluff/build/
echo "[!] Build successfull, all files available in build directory"
tree /home/build/fluff/build