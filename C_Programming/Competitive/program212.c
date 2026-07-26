#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    
    if(iNo > 0)
    {
        printf("%d\t",i);
        i++;
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0; 
}