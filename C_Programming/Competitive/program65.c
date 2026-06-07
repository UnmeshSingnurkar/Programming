// Accept n numbers from user and accept one number as No, return frquncy of no from it
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;   
        }
    }

    return iFreq;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p =NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize* sizeof(int));

    if(p == NULL)
    {
        printf("Unable to locate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter value to be checked : ");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency is : %d\n",iRet);

    free(p);

    return 0;
}