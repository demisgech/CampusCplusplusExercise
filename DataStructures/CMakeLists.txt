cmake_minimum_required(VERSION 3.5)
project(DataStructures
        VERSION 0.0.1
        DESCRIPTION "Data Structures"
        LANGUAGES CXX)

add_executable(excute 
                # main.cpp
                # queueMain.cpp
                # priorityQueueMain.cpp
                # dequeMain.cpp
                testTreeMain.cpp
                ./CircularLinkedList/src/CircularLinkedListExeption.cpp
                ./Stack/Exception/src/StackException.cpp
                ./Stack/Array/src/palindrome.cpp
                ./Stack/Array/src/decimal2binary.cpp
                ./Stack/Array/src/binary2decimal.cpp
                ./Stack/Array/src/evaluatePostfix.cpp
                ./Stack/Array/src/evaluatePrefix.cpp
                ./Stack/Array/src/infixToPostfix.cpp
                ./Stack/Array/src/precedence.cpp
                ./Stack/Array/src/applyOperation.cpp
                ./Queue/Exception/src/QueueException.cpp
                )
target_compile_features(excute PRIVATE cxx_std_23)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Array/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/ArrayList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Vector/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LinkedList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/DoublyLinkedList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/CircularLinkedList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Stack/LinkedList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Stack/Array/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Stack/Exception/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Queue/Exception/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Queue/LinkedList/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/PriorityQueue/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Deque/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Trees/include)