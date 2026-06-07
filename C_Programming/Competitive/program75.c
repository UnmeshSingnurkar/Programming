// Accept n numbers from user and display sumation of digits of each number
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDigit = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigit = 0;
        iSum = 0;

        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        printf("%d\t",iSum);
    }

    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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
    
    DigitsSum(p, iSize);

    free(p);

    return 0;
}