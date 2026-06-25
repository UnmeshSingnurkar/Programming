#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int i = 0, iFind = 0;
    iFind = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iFind = i;
            break;
        }
        i++;
        str++;
    }

    return iFind;
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

    iRet = FirstChar(Arr,cValue);   

    printf("First occurance is is : %d\n",iRet);

    return 0;
}