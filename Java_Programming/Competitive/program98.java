// Write a program to display all factors of N

class Logic
{
    void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program98
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.DisplayFactors(12);
    }
}