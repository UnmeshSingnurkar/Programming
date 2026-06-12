// Write a program to print grades 
class Logic
{
    void DisplayGrade(int iNo)
    {
        if((iNo <= 100) && (iNo >= 90))
        {
            System.out.println("A Grade");
        }
        else if((iNo < 90) && (iNo >= 80))
        {
            System.out.println("B Grade");
        }
        else if((iNo < 80) && (iNo >= 50))
        {
            System.out.println("C Grade");
        }
        else if((iNo < 50) && (iNo >= 35))
        {
            System.out.println("D Grade");
        }
        else if((iNo < 35) && (iNo >= 0))
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid Input");
        }
    }
}

class program87
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.DisplayGrade(82);
    }
}