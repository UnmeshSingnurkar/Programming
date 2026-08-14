#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0, Ans = 0;   

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    Ans = iNo1 & iNo2;

    printf("Result is : %d\n",Ans);
    return 0;
}