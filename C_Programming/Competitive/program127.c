#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\nEnter same number of rows and Columns");
    }

    for(i = iRow; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("*\t");
        }
        printf("\n"); 
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}