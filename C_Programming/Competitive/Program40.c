// write a program which accept area in square feet and convert it into square meter

#include<stdio.h>

double SquareMeter(float fNo)
{
    double dAns = fNo * 0.0929;

    return dAns;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in square meter is : %lf\n",dRet);

    return 0;
}