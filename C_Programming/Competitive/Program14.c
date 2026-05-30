// Accept one character from user and convert case of that character 

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = toupper(cValue);
    }

    printf("Character is : %c\n", cValue);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}