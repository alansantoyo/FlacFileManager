#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <dirent.h>
#include <iostream>
#include <set>

class Playlist
{
	DIR *s; // For artist directories
	struct dirent *art;

	DIR *d;
	struct dirent *dir;
	std::string dirPath = "/Users/alansantoyo/Downloads/Music";
public:
	Playlist();
	~Playlist();

	std::set<std::string> ArtistFolders;
	std::set<std::string> CurrentArtistDirectory;

	void printArtistFolders();
	void OpenDirectory(std::string PathName);
	void printFolderContents(std::string FolderName);

	friend std::ostream& operator<<(std::ostream& out, const Playlist &p);
};



template<typename T>
std::ostream& operator<<(std::ostream& out, const std::set<T>& set)
{
    if (set.empty())
        return out << "{}";
    out << "{ " << *set.begin();
    std::for_each(std::next(set.begin()), set.end(), [&out](const T& element)
    {
        out << ", " << element;
    });
    return out << " }";
}

#endif
