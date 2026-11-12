#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

void FileCopy(char FilenameSrc[], char FileNameDest[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fdSrc = 0,fdDest = 0;

    fdSrc = open(FilenameSrc,O_RDONLY);
    
    if(fdSrc == -1)
    {
        printf("Unable to Open Source File\n");
        return ;
    }
    
    fdDest = creat(FileNameDest,0777);

    if(fdDest == -1)
    {
        printf("Unable to Open Destination File\n");
        return ;
    }

    while ((iRet = read(fdSrc, Buffer, sizeof(Buffer))) != 0)
    {
        write(fdDest,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fdSrc);
    close(fdDest);
}

int main()
{
    char fNameSrc[30] = {'\0'};
    char fNameDest[30] = {'\0'};

    printf("Enter the Source file name : ");
    scanf("%[^'\n]s",fNameSrc);

    printf("Enter the Destination file name : ");           // Issue
    scanf("%[^'\n]s",fNameDest);

    FileCopy(fNameSrc,fNameDest);

    return 0;
}