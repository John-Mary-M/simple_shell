#include "main.h"
/**
 * run_command - executes command
 * @command:command from user
 */
void run_command(char *command)
{
pid_t child_pid;
child_pid = fork();
if (child_pid == -1)
{
perror("fork");
exit(1);
}
else if (child_pid == 0)
{
char **args = (char **)malloc(2 * sizeof(char *));
args[0] = command;
args[1] = NULL;
if (execv(command, args) == -1)
{
perror("execv");
exit(1);
}
}
else
{
int status;
if (waitpid(child_pid, &status, 0) == -1)
{
perror("waitpid");
exit(1);
}
}
}
