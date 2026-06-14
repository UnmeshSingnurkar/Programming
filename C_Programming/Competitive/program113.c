#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0';

    for(i = 1, ch1 = 'A'; i <= iRow; i++, ch1++)
    {
        for(j = 1; j <= iCol; j++)
        {
                printf("%c\t",ch1);   
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