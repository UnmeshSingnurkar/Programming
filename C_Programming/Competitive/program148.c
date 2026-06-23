#include<stdio.h>

int Difference(char *str)
{
    int iCountCapital = 0,iCountSmall = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else
        {
            iCountCapital++;
        }

        str++;
    }

    iDiff = iCountSmall - iCountCapital;
    return iDiff;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);

    printf("Difference of small and capital Characters is : %d\n",iRet);

    return 0;
}