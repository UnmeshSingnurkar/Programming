// Accept n numbers from user and display all such numbers which contains 3 digits in it
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDigit = 0, iTemp = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigit = 0;
        iTemp = Arr[iCnt];

        while(Arr[iCnt] != 0)
        {
            iDigit++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        if(iDigit == 3)
        {
            printf("%d\t",iTemp);
        }
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
    
    Digits(p, iSize);

    free(p);

    return 0;
}