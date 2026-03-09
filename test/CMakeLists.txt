add_executable(scanner_test TestFile.cpp Playlist.cpp Menu.cpp)

target_link_libraries(scanner_test PRIVATE gtest gtest_main)
