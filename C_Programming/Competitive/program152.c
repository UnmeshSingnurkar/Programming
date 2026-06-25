#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
            
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]s",Arr);

    struprx(Arr);

    printf("Modified String is : %s\n",Arr);

    return 0;
}