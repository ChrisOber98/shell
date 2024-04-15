#include <stdio.h>
#include <stdlib.h>

#define SHELL_RL_BUFSIZE 1024

char * shell_read_line(void)
{
	int bufsize = SHELL_RL_BUFSIZE;
	int position = 0;
	char * buffer = malloc(sizeof(char) * bufsize);
	int c;

	if (!buffer)
	{
		fprintf(stderr, "shell: allocation error\n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			buffer[position] = '\0';
			return buffer;
		}
		else
		{
			buffer[position] = c;
		}
		position++;

		if (position >= bufsize)
		{
			bufsize += SHELL_RL_BUFSIZE;
			buffer = realloc(buffer, bufsize);
			if (!buffer)
			{
				fprintf(stderr, "shell: allocation error\n");
				exit(EXIT_FAILURE);
			}

		}
	}
}

void shell_loop()
{
	char * line;
	// char ** args;
	int status;

	do 
	{
		printf("> ");
		line = shell_read_line();
		printf("%s\n", line);
		// args = shell_split_line(line);
		// status = shell_execute(args);

		free(line);
		// free(args);
	} while (status);
}