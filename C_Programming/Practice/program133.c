#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = false;
    
    printf("Enter Number of Elements : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter Number to be searched : ");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr,iLength,iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}