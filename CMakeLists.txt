cmake_minimum_required(VERSION 3.12...3.31)

project(scanner)

add_executable(scanner FileManager.cpp FlacFileFunctions.cpp FlacFileFunctions.h)

target_link_libraries(scanner PRIVATE)
