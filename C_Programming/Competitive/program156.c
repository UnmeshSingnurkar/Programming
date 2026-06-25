#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str,char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    printf("Enter A Character : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}