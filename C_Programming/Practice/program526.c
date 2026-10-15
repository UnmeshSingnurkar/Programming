// 4
// 1+2+3+4 = 10

// 7
// 1+2+3+4+5+6+7 = 28

#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;

    if(iNo > 0)
    {
        iSum = iSum + iNo;
        iNo--;
        Summation(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n",iRet);

    return 0;
}