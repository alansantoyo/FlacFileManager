#include "Playlist.h"


int main()
{
	Playlist playInit;
		
	playInit.printArtistFolders();

	std::set<std::string>::iterator sampleIt;

	sampleIt = playInit.ArtistFolders.begin();

	std::cout << "Chosen artist folder to test successful directory access: " << *sampleIt << "\n";

	playInit.printFolderContents(*sampleIt);

	sampleIt++;

	std::cout << "Chosen artist folder to test successful directory access: " << *sampleIt << "\n";

	playInit. printFolderContents(*sampleIt);


		
	std::cout << "\x1b[5;7m green text on regular background \x1b[0m  \n";

	return(0);
}

