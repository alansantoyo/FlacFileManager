#include "Playlist.h"

Playlist::Playlist()
{
	homeDir = std::getenv("HOME");  // This will only work on a Mac or Linux machine!
	currDir = homeDir;
}

void Playlist::displayDirContents()
{
	for(auto const& dir_entry : std::filesystem::directory_iterator{currDir})
	{
		if(dir_entry.path().filename().string()[0] != '.') // Make sure the current file isn't hidden before printing
			std::cout << dir_entry.path() << "\n";
		else;	// Do nothing
	}
}
/*
Current issue:
	Home directory will remain unchanged.
	Current directory will be equal to the current directory.
	Current directory can be changed.


*/

