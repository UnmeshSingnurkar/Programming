// Write a program to calculate the product of the digits

class Logic
{
    void ProductOfDigits(int iNo)
    {
        int iCnt = 0, iDigit = 0, iProd = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iProd = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProd = iProd * iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Product of digits is : "+iProd);
    }
}

class program96
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.ProductOfDigits(234);
    }
}