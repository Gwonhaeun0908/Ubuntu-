#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
	pid_t pid1, pid2;
	int status;
	int x, y;
	int result1 = 0, result2 = 1, result3 = 0;

	scanf("%d %d", &x, &y);

	pid1 = fork();

	pid1 = pid2 = -1;

	pid1 = fork();
	if(pid1 > 0)
		pid2 = fork();

	if(pid1 > 0 && pid2 > 0)
	{
		int a, b;
		
		for(int i = 0; i < y; i++)
		{
			result2 *= x;
		}

		waitpid(pid2, &status, 0);
		a = status >> 8;
		waitpid(pid1, &status, 0);
		b = status >> 8;

		printf("3 - 2 - 1 : %d\n", a - b - result2);
	}

	else if(pid1 == 0 && pid2 == -1)
	{
		for(int i = x; i <= y; i++)
		{
			 result1 += x;
		} 
		printf("result1 : %d\n", result1);
		exit(result1);
	}
	else if(pid1 > 0 && pid2 == 0)
	{
		for(int i = x; i <=y; i++)
		{
			result3 *= x * y;
		}
		printf("result3 : %d\n", result3);
		exit(result3);
	}

	else printf("fail to fork\n");
}
