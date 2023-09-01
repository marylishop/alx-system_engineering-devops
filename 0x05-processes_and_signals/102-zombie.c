#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - sleep 1.
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - creates zombie processes.
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid;
	int i = 0;

	while (i < 5)
	{
		child_pid = fork();
		/*Parent process*/
		if (child_pid > 0)
        
			printf("Zombie process created, PID: %d\n", child_pid);
		else
			/*child process*/
			exit(0);

		i++;
	}
	infinite_while();

	return (0);
}