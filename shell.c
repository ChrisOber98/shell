#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_SIZE 2048

int main(int argc, char* argv[])
{
	//Variable to hold user input.
	char input[INPUT_SIZE];

	do
	{
		printf("..< ");
		fgets(input, INPUT_SIZE, stdin);
		printf("You entered: %s\n", input);

	}while(strcmp("exit", input) != 0);

	return 0;
}