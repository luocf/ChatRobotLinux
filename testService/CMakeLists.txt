cmake_minimum_required(VERSION 3.5)
project(testService)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp testService.cpp testService.h common/json.hpp)
add_executable(testService ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(testService
        pthread
        )