#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    bool bFlag = false;

    if(ch >= 'A' && ch <= 'Z')
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


    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("It is a Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}