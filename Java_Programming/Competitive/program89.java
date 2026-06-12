// Write a program to print each digit of a number separately

class Logic
{
    void PrintDigits(int iNo)
    {
        int iDigit;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class program89
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintDigits(9876);
    }
}