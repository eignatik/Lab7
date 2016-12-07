cmake_minimum_required(VERSION 3.6)
project(Lab7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Functor.cpp Functor.h)
add_executable(Lab7 ${SOURCE_FILES} Functor.cpp Functor.h)