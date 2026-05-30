//accept number from user and print small if less than 50 ,medium if greater than 50 and less tha 100,large if grater than 100

#include<stdio.h>


void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if ((iNo>=50) && (iNo<100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}