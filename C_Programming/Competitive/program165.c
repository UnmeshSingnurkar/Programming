#include<stdio.h>

void StrCatX(char *str , char *dest)
{
    while(*str != '\0')
    {
        str++;
    }
    
    *str = ' ';
    str++;

    while(*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    printf("Enter a string : ");
    scanf(" %[^\n]",Brr);

    StrCatX(Arr,Brr);   

    printf("%s\n",Arr);

    return 0;
}