#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;

	if((pid = fork()) > 0)
	{
		sleep(1);
		exit(1);
	}
	else if(pid == 0)
	{
		printf("old sid: %d\n", getsid(0));
		printf("new sid: %d\n", setsid());
		sleep(600);
	}
}