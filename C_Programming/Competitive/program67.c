// Accept n numbers from user and accept one number as No, return index of first occurence of that No
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            break;   
        }
        else
        {
            iIndex = -1;
        }
    }

    return iIndex;
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

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First Occurance of the number is : %d\n",iRet);
    }

    free(p);

    return 0;
}