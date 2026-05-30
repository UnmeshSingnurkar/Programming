// write a program which accept distance in kilometer and conver into meters

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = iNo * 1000;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Km to meter is %d\n",iRet);

    return 0;
}