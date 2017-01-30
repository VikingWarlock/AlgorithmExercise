cmake_minimum_required(VERSION 3.6)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp fitst_algorithm.cpp common.cpp common.h)
set(SOURCE_FILES main.cpp common.h common.cpp random/random_list_algorithm.cpp random/random_list_algorithm.h search/first_algorithm.h search/fitst_algorithm.cpp sort/max_heap_helper.cpp sort/max_heap_helper.h)
add_executable(algorithms ${SOURCE_FILES})