cmake_minimum_required(VERSION 3.5)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
add_executable( HelloBinary main.cpp
                utils/manageEmployee.cpp
                utils/salaryCalculator.cpp)