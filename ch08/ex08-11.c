#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("%s\n", getenv("APPLE"));
	unsetenv("APPLE");

	if(!getenv("APPLE"))
	printf("APPLE not found\n");
}
