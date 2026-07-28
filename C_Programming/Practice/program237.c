#include<stdio.h>

int main()
{
    char *str = "Ganesh";

    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }
    printf("\n");

    return 0;
}