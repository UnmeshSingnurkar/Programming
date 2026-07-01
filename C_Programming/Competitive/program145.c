#include<stdio.h>

void Display(char ch)
{
    int iNo = ch;
    int iOctal = 0, iTemp = 0, iHex =0;
    int iRem = 0;
    iTemp = iNo;
    int iTimepass = 1;

    int T1 = 0;
    char T2 ;

    while(iNo != 0)
    {
        iRem = iNo % 8;
        iOctal = (iOctal ) + (iRem * iTimepass);
        iNo = iNo / 8;
        iTimepass = iTimepass * 10;
    }

    printf("Octal is : %d\n",iOctal);


    
    printf("Hexadecimal is : 0X");

    if((iTemp >= 0)&&(iTemp <= 9)   || 
       (iTemp >= 16)&&(iTemp <= 25) ||
       (iTemp >= 32)&&(iTemp <= 41) ||
       (iTemp >= 48)&&(iTemp <= 57) ||
       (iTemp >= 64)&&(iTemp <= 73) ||
       (iTemp >= 80)&&(iTemp <= 89) ||
       (iTemp >= 96)&&(iTemp <= 105) ||
       (iTemp >= 112)&&(iTemp <= 121) )
    {
        while(iTemp != 0)
        {
            iRem = iTemp % 16;
            iHex = iHex + (iRem * iTimepass);
            iTemp = iTemp / 16;
            iTimepass = iTimepass * 10;
        }
        
        printf("%d\n",iHex);
    }
    else
    {
        while(iTemp != 0)
        {
            iRem = iTemp % 16;
            if(iRem <= 9)
            {
                T1 = iRem;
            }
            else
            {
                T2 = iRem - 10 + 'A';
            }
            
            iTemp = iTemp / 16;
        }
        printf("%d%c\n",T1,T2);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}