// write a program which accept temperature in Fahrenheit and convert it into celcius

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iAns = 0;
    iAns = ((fTemp - 32)* 5 / 9);

    return iAns;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius is : %lf\n",dRet);

    return 0;
}