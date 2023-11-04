#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <math.h>

int main()
{
        pid_t pid;
        int status;
        int x ,y;
        int result;

        pid = fork();

        scanf("%d %d", &x, &y);

        if(pid > 0)
	{
                double result = pow(x, y);
                wait(&status);
                printf("%d\n", (status>>8) + (int)result);
        }

        else if(pid == 0)
	{
                int m = x * y;
                sleep(1);
                exit(m);
        }

        else
                printf("fail to fork\n");
}
