cmake_minimum_required(VERSION 3.5)
project(DataStructures
        VERSION 0.0.1
        DESCRIPTION "Data Structures"
        LANGUAGES CXX)

add_executable(excute main.cpp)
target_compile_features(excute PRIVATE cxx_std_23)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Array/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/ArrayList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Vector/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LinkedList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/DoublyLinkedList/include)