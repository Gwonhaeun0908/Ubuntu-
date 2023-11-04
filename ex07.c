#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	int i = 1;

	pid = fork();

	if(pid > 0) //부모 프로세스
	{
		printf("%d\n", i++);
	}
	
	else if(pid == 0) //자식 프로세스
	{
		printf("%d\n", i--);
	}

	else printf("fail to fork\n");
}
