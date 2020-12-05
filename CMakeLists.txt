cmake_minimum_required(VERSION 3.17)
project(proj)

set(CMAKE_CXX_STANDARD 14)

set(EIGEN_DIR "lib/eigen-3.3.8")
include_directories(${EIGEN_DIR})

add_executable(proj main.cpp Data.cpp Data.hpp Approximator.cpp Approximator.hpp)
