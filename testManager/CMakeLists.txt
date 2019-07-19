cmake_minimum_required(VERSION 3.5)
project(testManager)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp manager.cpp manager.h common/FileUtils.cpp common/FileUtils.hpp common/json.hpp common/CommonVar.h common/Log.cpp common/Log.hpp)

add_executable(testManager ${SOURCE_FILES})