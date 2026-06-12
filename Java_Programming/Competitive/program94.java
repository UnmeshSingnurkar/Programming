// Write a program to find largest digit in a given number

class Logic
{
    void FindLargestDigit(int iNo)
    {
        int iCnt = 0, iDigit = 0, iMax = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Maximum digit is : "+iMax);
    }
}

class program94
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindLargestDigit(83429);
    }
}