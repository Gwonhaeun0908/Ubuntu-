#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;
	int interval;

	if(argc != 3)
		exit(1);

	pid = atoi(argv[1]);
	interval = atoi(argv[2]);

	printf("shell process...\n");
	printf("process id: %d, group id: %d, session id: %d\n", pid, getpgid(pid));
	printf("current process..not daemon...\n");
	printf("process id: %d, group id:%d, session id: %d\n", getpid(), getpgrp(), getsid(0));

	sleep(interval);
}
