#include "Playlist.h"


int main()
{
	Playlist playInit;
		
	playInit.printArtistFolders();

	std::set<std::string>::iterator sampleIt;

	sampleIt = playInit.ArtistFolders.begin();

	std::cout << *sampleIt << "\n";

	//std::string songs = *sampleIt;

	playInit.printFolderContents(*sampleIt);

	return(0);
}

