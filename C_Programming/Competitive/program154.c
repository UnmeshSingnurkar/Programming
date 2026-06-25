#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);   
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    DisplayDigits(Arr);

    return 0;
}