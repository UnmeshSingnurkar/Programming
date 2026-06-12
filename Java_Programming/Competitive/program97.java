// Write a program to count how many even and odd numbers lie between 1 and N

class Logic
{
    void CountEvenOddRange(int iNo)
    {
        int iCnt = 0, iCountEven = 0, iCountOdd = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }
        
        System.out.println("Odd numbers : "+iCountOdd);
        System.out.println("Even numbers : "+iCountEven);
    }
}

class program97
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CountEvenOddRange(50);
    }
}