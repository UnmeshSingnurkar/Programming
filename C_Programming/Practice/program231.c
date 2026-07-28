#include<stdio.h>

int main()
{
    char str[] = {'J','a','y',' ','G','a','n','e','s','h'}; // Garbage may occour till it finds \0
    
    printf("%s\n",str);

    return 0;
}