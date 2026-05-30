// write a program which accept number from user and return difference between 
//summation of even digits and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0, iSumOdd = 0;
    int iAns = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit%2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo/10;
    }

    iAns = iSumEven - iSumOdd;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}