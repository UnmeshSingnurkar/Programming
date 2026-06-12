// Write a program to count factors of N

class Logic
{
    void CountFactors(int iNo)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }

        System.out.println(iCount);
    }
}

class program99
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CountFactors(12);
    }
}