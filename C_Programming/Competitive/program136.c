#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    bool bFlag = false;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
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


    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}