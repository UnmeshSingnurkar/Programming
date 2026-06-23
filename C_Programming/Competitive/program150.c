#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;
    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);

    return 0;
}