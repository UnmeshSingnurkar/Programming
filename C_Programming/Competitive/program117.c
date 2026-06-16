#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1, iCount = 1; j <= iCol; j++, iCount = iCount + 2)
            {
                printf("%d\t",iCount);
            }
            printf("\n");
        }
        else
        {
            for(j = 1, iCount = 2; j <= iCol; j++, iCount= iCount + 2)
            {
                printf("%d\t",iCount);
            }
            printf("\n");
        } 
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