#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}


int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Summation(Brr,iLength);

    printf("Summation is : %d\n",iRet);

    free(Brr);

    return 0;
}