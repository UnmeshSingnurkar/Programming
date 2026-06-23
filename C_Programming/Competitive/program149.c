#include<stdio.h>
#include<stdbool.h>

bool CheckVowels(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
        *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bFlag = true;
        }
        break;
    }
    return bFlag;
}

int main()
{
    char Arr[20] = {'\0'};
    bool bRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n]s",Arr);

    bRet = CheckVowels(Arr);

    if(bRet == true)
    {
        printf("Contains vowels\n");
    }
    else
    {
        printf("Does not contain vowels\n");
    }

    return 0;
}