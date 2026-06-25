#include<stdio.h>

void StrCpyCap(char *str , char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    StrCpyCap(Arr,Brr);   

    printf("%s\n",Brr);

    return 0;
}