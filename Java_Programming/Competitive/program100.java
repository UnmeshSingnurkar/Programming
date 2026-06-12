// Write a program to print all numbers from 1 to N that are divisble by 2 and 3

class Logic
{
    void PrintDivisibleBy2And3(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program100
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintDivisibleBy2And3(30);
    }
}