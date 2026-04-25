cmake_minimum_required(VERSION 3.10)

# Project Name and Version
project(AbyssalInterfaceHUD VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(HUD_monitor HUD_monitor.cpp)
