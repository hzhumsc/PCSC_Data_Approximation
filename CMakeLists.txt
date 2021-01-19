cmake_minimum_required(VERSION 3.17)
project(proj)

set(CMAKE_CXX_STANDARD 14)

set(EIGEN_DIR "lib/eigen-3.3.8")
include_directories(${EIGEN_DIR})

add_executable(proj main.cpp Data.cpp Data.hpp Approximator.cpp Approximator.hpp Matrix.cpp Matrix.hpp UserInterface.cpp UserInterface.hpp test/GeneralTest.cpp test/GeneralTest.hpp test/Test_1.cpp test/Test_1.hpp test/Test_2.cpp test/Test_2.hpp test/Test_3.cpp test/Test_3.hpp test/Test_4.cpp test/Test_4.hpp)
