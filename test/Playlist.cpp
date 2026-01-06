#include "Playlist.h"

Playlist::Playlist()
{
	d = opendir(dirPath.c_str());
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			if(std::strcmp(dir->d_name, ".") != 0) // || std::strcmp(dir->d_name, "..") != 0)
				if(std::strcmp(dir->d_name, "..") != 0)
					ArtistFolders.insert(dir->d_name);
    		}

  	}
}

Playlist::~Playlist()
{
	closedir(d);
}

void Playlist::printArtistFolders()
{
	std::cout << ArtistFolders << "\n";
}

void Playlist::OpenDirectory(std::string PathName)
{
	if(!CurrentArtistDirectory.empty())
		CurrentArtistDirectory.clear();

	s = opendir(PathName.c_str());
	if (s)
	{
		while((art = readdir(s)) != NULL)
		{
			if(std::strcmp(art->d_name, ".") != 0)
				if(std::strcmp(art->d_name,"..") != 0)
					CurrentArtistDirectory.insert(art->d_name);
		}
		closedir(s);
	}

}


void Playlist::printFolderContents(std::string FolderName)
{
	std::string newPath = dirPath;

	newPath.push_back('/');

	newPath.append(FolderName);

	newPath.push_back('/');

	OpenDirectory(newPath);

	std::cout << CurrentArtistDirectory << "\n";

}

