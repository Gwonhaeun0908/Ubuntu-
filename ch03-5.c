#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char **argv)
{
        int filedes;
        off_t newpos;

        filedes = open("data1.txt", O_RDONLY);

        newpos = lseek(filedes, (off_t)0, SEEK_END);

        printf("file size : %d\n", newpos);

        close(filedes);
}
