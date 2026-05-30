// write a program which accept radius of circle and calculate its area

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0;
    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf\n",dRet);

    return 0;
}