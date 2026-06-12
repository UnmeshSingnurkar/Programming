// Write a program to check whether number is palindrome or not

class Logic
{
    void CheckPalindrome(int iNum)
    {
        int iDigit = 0, iRev = 0, iTemp = 0;
        iTemp = iNum;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iRev = (iRev*10) + iDigit;
            iNum = iNum / 10;
        }

        if(iTemp == iRev)
        {
            System.out.println("Number is palindrome");
        }
        else
        {
            System.out.println("Number is not palindrome");
        }
        
    }
}

class program77
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);
    }
}