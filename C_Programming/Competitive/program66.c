// Accept n numbers from user and accept one number as No, check whether no is present or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p =NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
}