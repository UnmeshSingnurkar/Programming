// Write a program to print suum of even digits and sum of odd digits

class Logic
{
    void SumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iSumEven = 0, iSumOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Sum of even digits : "+iSumEven);
        System.out.println("Sum of Odd digits : "+iSumOdd);
    }
}

class program84
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenOddDigits(123456);
    }
}