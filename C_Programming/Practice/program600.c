#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char Filename[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, iFileSize = 0;

    fd = open(Filename,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
        return -1;
    }

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        iFileSize = iFileSize + iRet;
    }

    close(fd);

    return iFileSize;
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