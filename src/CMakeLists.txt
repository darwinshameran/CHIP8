# CMakeList.txt : CMake project for src, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (src "Registers.cpp" "Registers.h" "Memory.cpp" "Memory.h" "Stack.cpp" "Stack.h")

# TODO: Add tests and install targets if needed.
