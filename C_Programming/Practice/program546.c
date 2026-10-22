#include<stdio.h>

int StrlenX(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        iCount++;
        str++;
        StrlenX(str);
    }

    return iCount;    
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}