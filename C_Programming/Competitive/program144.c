#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    bool bFlag = false;

    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char cValue = 0;
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}