#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Exam time 7am\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Exam time 8:30am\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Exam time 9:20am\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Exam time 10:30am\n");
    }
    else
    {
        printf("Invalid Input\nEnter character between A,B,C,D\n");
    }    
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}