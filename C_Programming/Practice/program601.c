#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char Filename[])
{
    struct stat sobj;
    
    stat(Filename,&sobj);

    return sobj.st_size;
}

int main()
{
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name : ");
    scanf("%[^'\n]s",fName);

    iRet = CalculateFileSize(fName);
    printf("Size of File : %d bytes\n",iRet);

    return 0;
}