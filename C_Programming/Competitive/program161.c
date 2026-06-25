#include<stdio.h>

void StrCpyX(char *str , char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
}

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    StrCpyX(Arr,Brr);   

    printf("%s\n",Brr);

    return 0;
}