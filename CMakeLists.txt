cmake_minimum_required(VERSION 3.12...3.31)

project(scanner LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(googletest)

add_executable(scanner FileManager.cpp FlacFileFunctions.cpp FlacFileFunctions.h)

enable_testing()
add_subdirectory(test)
