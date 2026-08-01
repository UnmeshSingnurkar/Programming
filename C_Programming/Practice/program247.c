#include<stdio.h>

void strlenX(char *str)
{
    *str = 'A';                     // Issue
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);               

    strlenX(Arr);

    printf("String is : %s\n",Arr);

    return 0;
}