#ifndef _MAIN_
#define _MAIN_


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 1024
void run_command(char *command);
void run_command_with_args(char *command); 
/*int child_pid(char *command);*/
/*char _readline(int *incommand);*/

#endif /* MAIN_H*/
