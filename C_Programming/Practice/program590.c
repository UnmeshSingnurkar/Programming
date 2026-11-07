#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>      // only linux based
#include<string.h>  

#define BUFFER_SIZE 100

int main()
{
    unlink("Marvellous.txt");

    return 0;
}