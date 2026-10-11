#include<stdio.h>

void Display(int iNo)
{ 
    if(iNo != 0)
    {
        printf("Jay Ganesh... : %d\n",iNo);
        Display(iNo--);                         // issue (post drecrement)
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}