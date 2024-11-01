cmake_minimum_required(VERSION 3.5)
project(Algorithms
        VERSION 0.0.1
        DESCRIPTION "Algorithms"
        LANGUAGES CXX)
add_executable(excute main.cpp 
                # Sorting
                    ./Sorting/src/simpleSort.inl   
                    ./Sorting/src/bubbleSort.inl 
                    ./Sorting/src/selectionSort.inl   
                    ./Sorting/src/insertionSort.inl   
                    ./Sorting/src/mergeSort.inl   
                    ./Sorting/src/quickSort.inl 
                # Searching
                     ../Searching/src/linearSearch.inl  
                     ../Searching/src/binarySearch.inl  
                    )   
target_compile_features(excute PRIVATE cxx_std_23)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Sorting/include)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Searching/include)