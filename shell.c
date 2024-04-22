#include "shell.h"

int main(int argc, char ** argv)
{
	// Load config files, if any.


	// Run command loop.
	shell_loop();

	//  Perform any shutdown or cleanup.

	return EXIT_SUCCESS;
}