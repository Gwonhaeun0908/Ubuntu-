#include <stdio.h>
#include <unistd.h>

int main()
{
	putenv("APPLE=BANANA");
	printf("%s\n", getenv("APPLE"));

	excel("ex08-11", "ex08-11", (char *)0);
}
