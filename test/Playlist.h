#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <dirent.h>
#include <iostream>
#include <set>
#include <filesystem>

class Playlist
{
public:
	std::filesystem::path homeDir;
	std::filesystem::path currDir;

	Playlist();

	void displayDirContents();


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
