// Write a program to check whether it is divisible by 5 and 11 or not

class Logic
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println("Number is divisible by 5 and 11");
        }
    }
}

class program88
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckDivisible(55);
    }
}