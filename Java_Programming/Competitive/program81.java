// Write a program to check wheather it is prime or not

class Logic
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                break;
            }
        }
        
        if(iCnt >= (iNo/2)+1)
        {
            System.out.println("It is a prime number");
        }
        else
        {
            System.out.println("It is not a prime number");
        } 
    }
}

class program81
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPrime(11);
    }
}