#include <gtest/gtest.h>

#include "Playlist.h"

TEST(InitTest, HomeDirFound)
{
	Playlist findHome;
	std::string actual = "/Users/alansantoyo";
	EXPECT_EQ(actual, findHome.homeDir);
}

TEST(DirTest, CurrAndHomeEqual)
{
	Playlist dir;
	EXPECT_EQ(dir.homeDir, dir.currDir);
}

// int main() // Simple test to make sure directory contents are printed out.
// {
// 	Playlist dir;
//
//	dir.displayDirContents();
//
//	return 0;
// }


// What's Next???????
//
// 
