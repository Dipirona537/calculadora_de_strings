cmake_minimum_required(VERSION 3.22)
project(divisao_polinomios)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_COMPILER=C:/compiladores/LLVM/bin/clang.exe)
set(CMAKE_CXX_COMPILER=C:/compiladores/LLVM/bin/clang++.exe)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CL_COVERAGE_COMPILE_FLAGS}")

add_executable(divisao_polinomios main.cpp divisor.h sub_x.h)