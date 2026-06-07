// Accept n numbers from user and accept range and display all elements in that range
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\t",Arr[iCnt]); 
        }
    }

    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter Starting value : ");
    scanf("%d",&iValue1);

    printf("Enter Ending value : ");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}