#include<stdio.h>

void StrNCpyX(char *str , char *dest, int iCnt)
{
    while((*str != '\0') && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }
}

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^\n]",Arr);

    StrNCpyX(Arr,Brr,10);   

    printf("%s\n",Brr);

    return 0;
}