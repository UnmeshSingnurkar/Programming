// Write a program to find the sum of digits of a number

class Logic
{
    void SumOfDigits(int iNum)
    {
        int iDigit = 0, iSum = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iSum = iSum + iDigit;
            iNum = iNum / 10;
        }

        System.out.println("Sum of Digits is : "+iSum);
    }
}

class program76
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumOfDigits(1234);
    }
}