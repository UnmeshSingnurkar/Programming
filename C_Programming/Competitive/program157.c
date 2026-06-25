#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    printf("Enter A Character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Frequency is : %d\n",iRet);

    return 0;
}