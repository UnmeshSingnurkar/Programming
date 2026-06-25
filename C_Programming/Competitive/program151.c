#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
            
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]s",Arr);

    strlwrx(Arr);

    printf("Modified String is : %s\n",Arr);

    return 0;
}