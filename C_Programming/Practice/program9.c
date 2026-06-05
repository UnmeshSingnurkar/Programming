#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,             // First input
                        float fNo2              // Second input
                    )
{
    float fAns = 0.0f;                          // Variable to store result
    fAns = fNo1 + fNo2;                         // Perform Addition
    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                       // To store 1st input
    float fValue2 = 0.0f;                       // To store 2nd input
    float fResult = 0.0f;                       // To store the result

    printf("Enter 1st number : \n");
    scanf("%f",&fValue1);

    printf("Enter 2nd number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);   // Function calling

    printf("Addition is : %f\n",fResult);

    return 0;
}