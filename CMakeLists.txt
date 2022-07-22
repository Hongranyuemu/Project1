cmake_minimum_required(VERSION 3.21)
project(Project1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

file (GLOB_RECURSE files *.c AND *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
endforeach ()
