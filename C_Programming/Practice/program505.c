#include<stdio.h>

void Display()
{
    auto int i = 1;                      // storage class of i is auto so for every stack frame the i will get initialized will 1 every time
    
    printf("Jay Ganesh... : %d\n",i);
    i++;

    Display();
}

int main()
{
    Display();

    return 0;
}