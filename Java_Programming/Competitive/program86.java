// Write a program to check a year is leap year or not

class Logic
{
    void CheckLeapYear(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo % 4 == 0)
        {
            System.out.println("Year is a leap year");
        }
        else
        {
            System.out.println("Year is a leap year");
        }
    }
}

class program86
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(2024);
    }
}