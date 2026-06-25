#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;   
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    iRet = CountWhite(Arr);

    printf("Number of White Spaces Are : %d\n",iRet);

    return 0;
}