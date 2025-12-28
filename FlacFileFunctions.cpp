#include "FlacFileFunctions.h"

void scanForFlacFiles(std::string filename)
{
	std::string command = "find /Users/alansantoyo -type f -name \"*.flac\" > ";
	command.append(filename);

	std::cout << "\n\nScanning disk for FLAC files...\n";
	std::system(command.c_str());
}


