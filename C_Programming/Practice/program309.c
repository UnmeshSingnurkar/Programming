#include<stdio.h>

int main()
{
    unsigned int iNo = 0, iMask = 4, iAns = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);
    
    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd Bit is ON\n");
    }
    else
    {
        printf("3rd Bit is OFF\n");
    }
    
    return 0;
}