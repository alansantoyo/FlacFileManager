#include "Playlist.h"

Playlist::Playlist()
{
	DIR           *d;
	struct dirent *dir;
	d = opendir("/Users/alansantoyo/Downloads/Music");
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			if(std::strcmp(dir->d_name, ".") != 0) // || std::strcmp(dir->d_name, "..") != 0)
				if(std::strcmp(dir->d_name, "..") != 0)
					ArtistFolders.insert(dir->d_name);
    		}

    	closedir(d);
  	}
}

void Playlist::printArtistFolders()
{
	std::cout << ArtistFolders << "\n";
}


