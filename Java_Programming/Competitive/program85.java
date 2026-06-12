// Write a program to check if it +ve,-ve or 0

class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Number is +ve");
        }
        else if(iNo < 0)
        {
            System.out.println("Number is -ve");
        }
        else
        {
            System.out.println("Number is 0");
        }
    }
}

class program85
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckSign(-8);
    }
}