#include "main.h"

/**
 * main - entry point for the whole shell.
 *
 * Return: 0 on sucess.
 */
int main(void)
{
	char command[MAX_COMMAND_LENGTH] = "";

	while (1)
	{
		write(1, "Cisfun$ ", 9);

		if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
		{
			perror("fgets");
			exit(1);
		}

		command[strcspn(command, "\n")] = '\0';

		if (strlen(command) == 0)
			continue;
		if (strcmp(command, "exit") == 0)
			break;
		run_command_with_args(command);
	}
	return (0);
}
