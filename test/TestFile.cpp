#include <gtest/gtest.h>

#include "Playlist.h"

TEST(InitTest, HomeDirFound)
{
	Playlist findHome;
	std::string actual = "/Users/alansantoyo";
	EXPECT_EQ(actual, findHome.homeDir);
}

