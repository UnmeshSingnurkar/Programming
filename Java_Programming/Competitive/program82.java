// Write a program to print all even numbers upto N

class Logic
{
    void PrintEvenNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        } 
    }
}

class program82
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintEvenNumbers(20);
    }
}