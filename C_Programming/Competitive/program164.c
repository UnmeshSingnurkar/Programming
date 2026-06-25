#include<stdio.h>

void StrCpySmall(char *str , char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    StrCpySmall(Arr,Brr);   

    printf("%s\n",Brr);

    return 0;
}