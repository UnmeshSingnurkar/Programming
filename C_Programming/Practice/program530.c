// 4
// 4*3*2*1 = 24

// 5
// 5*4*3*2*1 = 120

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iFact = 1;

    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Factorial(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0; 
    ULONG iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of %d is : %lu\n",iValue,iRet);

    return 0;
}