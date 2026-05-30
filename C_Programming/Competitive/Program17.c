//accept number from user and display its factors in decreasing order

#include<stdio.h>


int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;

}