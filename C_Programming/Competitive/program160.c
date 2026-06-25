#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL, *end = NULL;
    start = str;
    char cTemp = '\0';

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(start < str)
    {
        cTemp = *start;
        *start = *str;
        *str = cTemp;
        
        str--;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    StrRevX(Arr);   

    printf("Reversed string is : %s\n",Arr);

    return 0;
}