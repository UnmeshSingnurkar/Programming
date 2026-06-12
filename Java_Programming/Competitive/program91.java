// Write a program to find the sum of all even numbers upto N

class Logic
{
    void SumEvenNumbers(int iNo)
    {
        int iCnt = 0, iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum =  iSum + iCnt;
            }
        }

        System.out.println("Sum of Even number till given input is : "+ iSum);
    }
}

class program91
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenNumbers(10);
    }
}