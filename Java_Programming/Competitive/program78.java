// Write a program to find max of two numbers

class Logic
{
    void findMax(int iNo1,int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1+" is greater");
        }
        else
        {
            System.out.println(iNo2+" is greater");
        } 
    }
}

class program78
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findMax(20,15);
    }
}