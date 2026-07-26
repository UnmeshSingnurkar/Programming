#include<stdio.h>

void Display()
{   
    static char ch = 'a';
    static int i = 1;

    if(i <= 6)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        Display();
    }
}

int main()
{
    Display();
    printf("\n");

    return 0; 
}