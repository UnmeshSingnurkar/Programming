#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;                   // To store 1st input
    float fValue2 = 0.0f;                   // To store 2nd input
    float fResult = 0.0f;                   // To store the result

    printf("Enter 1st number : \n");
    scanf("%f",&fValue1);

    printf("Enter 2nd number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;            // Perform the Addition

    printf("Addition is : %f\n",fResult);

    return 0;
}