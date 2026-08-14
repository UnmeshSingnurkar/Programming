#include<stdio.h>

int main()
{
    int iNo = 0, iDigit = 0, iCount = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);
    
    while(iNo != 0)
    {
        iDigit = iNo % 2;

        if(iDigit == 1)
        {
            iCount++;
        }

        iNo = iNo/2;
    }

    printf("Count of 1 in the binary is : %d\n",iCount);
    
    return 0;
}