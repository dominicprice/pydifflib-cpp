project(pydifflib-tests)
cmake_minimum_required(VERSION 3.0)

include_directories(..)

add_executable(get_close_matches get_close_matches.cpp)
add_executable(differ differ.cpp)
