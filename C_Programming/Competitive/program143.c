#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <='Z'; cCnt++)
        {
            printf("%c\t",cCnt);
        }
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t",cCnt);
        }
        printf("\n");
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = 0;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}