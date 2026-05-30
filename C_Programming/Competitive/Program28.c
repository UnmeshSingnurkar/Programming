// write a program to find factorial of that number

#include<stdio.h>


int Fact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = iMul*iCnt;
    }
    
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial of given number is %d\n",iRet);

    return 0;
}