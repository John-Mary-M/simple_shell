#include "main.h"

/**
 * run_command_with_args - runs command line arguements
 * @command: char pointer to the command to be run.
 * Return: void.
 */
void run_command_with_args(char *command)
{
	char *args[MAX_ARGUMENTS], *token;
	int i = 0;

	token =strtok(command, " ");
	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}

	if (fork() == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("execve");
			exit(1);
		}
	}
	else
		wait(NULL);
}
