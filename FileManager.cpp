#include <iostream>
#include <cstdlib>

#include "FlacFileFunctions.h"

void printInstructions();

int main()
{
	char command;

	std::cout << "This menu helps organize and see all the .flac files on the computer's hard drive!\n\n";

	do
	{
		printInstructions();
		std::cout << "Enter a command from the above options: ";
		std::cin >> command; 

		switch(command)
		{
			case('r'): {
				//listFlacFiles();
				break;
			}
			case('l'): {
				std::cout << "\n\nDisplaying all files in current directory: \n";
				std::system("ls");
				break;
			}
			case('s'): {
				std::string filename;
				std::cout << "\n\nEnter the name of the file you want the list of FLAC files in: ";
				std::cin >> filename;
				scanForFlacFiles(filename);
				break;
			}
			case('f'): {
				// Initialize a 'Tracklist' object
				// 	constructor would scan the 'flac' music files and initialize a sort of list object with each
				// 		file path in the 'Music' folder.
				//
				// system("clear"); to clear the screen
				//
				// display 5 file names at a time
				//
				// 
				break;
			}
			default: {
			}
		}

		std::system("clear");
		std::cout << "\n\n\n\n\n\n\n\n\n";
	} while(command != 'q');

	std::cout << "\n\nExiting Program...\n";

	return 0;
}

void printInstructions()
{
	std::cout << "\nChoose from the following options:\n";
	std::cout << "\tt: Enter shell mode (Not in use yet)\n";
	std::cout << "\tr: Scan drive for all .flac files\n";
	std::cout << "\tl: List all files in current directory\n";
	std::cout << "\ts: Scan disk for all FLAC files available for decoding\n";
	std::cout << "\tf: Enter file viewing mode\n";
	std::cout << "\tq: Exit program\n\n";
	
	std::cout << "\x1b[32m green text on regular background \x1b[0m  \n";

}

