/*
    Algorithm:-

    START
        Accept 1st number as No1
        Accept 2nd number as No2
        Perform addition of No1 and No2
        Display the result
    STOP
*/

#include<stdio.h>

int main()
{
    // Variable Creation with Default Values
    float i =0.0f ,j = 0.0f ,k = 0.0f;

    printf("Enter 1st number : \n");
    scanf("%f",&i);

    printf("Enter 2nd number : \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is : %f\n",k);

    return 0;
}