#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
            
        }
        else
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

    DisplayDigits(Arr);

    printf("Modified String is : %s\n",Arr);

    return 0;
}