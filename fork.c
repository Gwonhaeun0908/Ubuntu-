#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;
	int i = 1, n, result = 0;
	scanf("%d, &n);

	pid = fork();

	if(sum >0) //부모
	{
		for(i; i<=n; i++)
		{
			result += i;
		}
	}

	else if(sum == 0)//자식
	{
		for(i; i<=n; i++)
		{
			result = result * i;
		}
	}

	else printf("fail to fork\n");
}
