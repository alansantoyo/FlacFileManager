cmake_minimum_required(VERSION 3.12...3.31)

project(test)

add_executable(test TestFile.cpp Playlist.cpp Playlist.h)

target_link_libraries(test PRIVATE)
