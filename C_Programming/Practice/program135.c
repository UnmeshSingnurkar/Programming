#include<stdio.h>
#include<stdlib.h>

// Time Complexity : O(N)

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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
    
    iRet = Maximum(Brr,iLength);

    printf("Maximum Value is : %d\n",iRet);

    free(Brr);

    return 0;
}