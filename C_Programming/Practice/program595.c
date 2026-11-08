#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    write(1,"Jay Ganesh...\n",14);

    return 0;
}

// fd 0 : stdin
// fd 1 : stdout
// fd 2 : stdout (to show error on the console)
