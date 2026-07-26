#include<stdio.h>

void Display()
{   
    static int i = 5;

    if(i > 0)
    {
        printf("%d\t",i);
        i--;
        Display();
    }
}

int main()
{
    Display();
    printf("\n");

    return 0; 
}