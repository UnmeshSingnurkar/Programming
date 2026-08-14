#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    start = str;
    char temp = '\0';

    while(*str != '\0')
    {
        str++;
    }
    
    str--;
    end = str;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n]s",Arr);

    strrevX(Arr);

    printf("Reversed String is : %s\n",Arr);

    return 0;
}