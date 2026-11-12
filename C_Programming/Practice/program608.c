#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int CountSmall(char Filename[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, iCount = 0, i = 0;

    fd = open(Filename,O_RDONLY);

    if(fd == -1)
    {
        return -ERR_OPEN;
    }

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
            {
                iCount++;
            }
        }

        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return iCount;
}

int main()
{
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name : ");
    scanf("%[^'\n]s",fName);

    iRet = CountSmall(fName);

    if(iRet == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("Small Letter : %d\n",iRet);    
    }

    return 0;
}