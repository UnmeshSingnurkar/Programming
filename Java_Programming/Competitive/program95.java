// Write a program to find smallest digit in a given number

class Logic
{
    void FindSmallestDigit(int iNo)
    {
        int iCnt = 0, iDigit = 0, iMin = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iMin = iNo % 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Minimum digit is : "+iMin);
    }
}

class program95
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindSmallestDigit(83429);
    }
}