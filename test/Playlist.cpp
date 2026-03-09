#include "Playlist.h"

Playlist::Playlist()
{
	homeDir = std::getenv("HOME");

}
/*
Current issue:
If the current file is not a directory, the program segfaults.
Added error checking to identify when the current file is not a directory,
	but now I need to handle the error so that the program does not abort. 
	
	Possible solution: Incrementing an iterator until it reaches an actual directory.
*/

