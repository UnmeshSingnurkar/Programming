#include<stdio.h>

int CountCapital(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
        CountCapital(str);
    }

    return iCount;    
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Number of Captal : %d\n",iRet);

    return 0;
}