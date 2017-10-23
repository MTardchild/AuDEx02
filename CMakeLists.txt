cmake_minimum_required(VERSION 3.8)
project(AuDEx02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp RandomAccessMachine.cpp RandomAccessMachine.h Ackermann.cpp Ackermann.h)
add_executable(AuDEx02 ${SOURCE_FILES})