#!/bin/bash

python3 convert.py > cpp_output/tube_lines.cpp
g++ -std=c++11 cpp_output/tube_lines.cpp
