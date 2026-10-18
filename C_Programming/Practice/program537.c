// 5678
// 8  *  7 *  6 *  5

#include<stdio.h>

int DigitMult(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;

        DigitMult(iNo/10);          //changed
    }
    
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DigitMult(iValue);
    printf("Multiplication is : %d\n",iRet);

    return 0;
}