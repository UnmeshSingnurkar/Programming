// Write a program to calculate  the power of number using loops

class Logic
{
    void CaluclatePower(int iBase , int iExp)
    {
        int iCnt = 0, iAns = 0;
        iAns = 1;

        for(iCnt = 0; iCnt < iExp; iCnt++)
        {
            iAns = iAns * iBase;
        }

        System.out.println(iAns);
    }
}

class program90
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CaluclatePower(5,5);
    }
}