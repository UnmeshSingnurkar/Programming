#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    bool bFlag = false;

    if(ch >= '0' && ch <= '9')
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);


    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}