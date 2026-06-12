// Write a program to print reverse N to 1

class Logic
{
    void PrintReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo ; iCnt > 0; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program92
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintReverse(10);
    }
}