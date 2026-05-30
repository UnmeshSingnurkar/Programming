// accept a character from user and check if it is vowel or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char cCh)
{
   if(cCh=='a'|| cCh == 'e' || cCh=='i'|| cCh == 'o'|| cCh =='u') 
   {
        return TRUE;
   }
   else
   {
        return FALSE;
   }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }

    return 0;

}