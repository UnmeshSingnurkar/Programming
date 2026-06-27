#include<stdio.h>
#include<stdlib.h>

// Time Complexity : O(N)

int Minimun(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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
    
    iRet = Minimun(Brr,iLength);

    printf("Minimun Value is : %d\n",iRet);

    free(Brr);

    return 0;
}