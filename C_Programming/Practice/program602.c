#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

void DisplayFileInformation(char Filename[])
{
    struct stat sobj;
    
    stat(Filename,&sobj);

    printf("Filename : %s\n",Filename);
    printf("Inode Number : %ld\n",sobj.st_ino);
    printf("File Size : %ld\n",sobj.st_size);
    printf("Blocks Size is : %ld\n",sobj.st_blksize);
    printf("Blocks Allocated : %ld\n",sobj.st_blocks);

}

int main()
{
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter File Name : ");
    scanf("%[^'\n]s",fName);

    DisplayFileInformation(fName);

    return 0;
}