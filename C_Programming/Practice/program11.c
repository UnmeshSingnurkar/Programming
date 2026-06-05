/*
1.  START
        Accept number as no
        If no is completely divisible by 2
            then print Even
        Otherwise
            print Odd
    STOP


2.  START
        Accept number as no
        Divide no by 2
        If remainder is 0 
            then print as Even
        Otherwise
            print as Odd
    STOP
*/

#include <stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}