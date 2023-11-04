#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("MYDATA=%s\n", getenv("MYDATA"));
	while(**environ)
		printf("%s\n", *environ++);
}
