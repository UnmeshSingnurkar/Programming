// Write a program to find min of three numbers

class Logic
{
    void findMin(int iNo1, int iNo2, int iNo3)
    {
        if((iNo1 < iNo2) && (iNo1 < iNo3))
        {
            System.out.println(iNo1+" is smallest");
        }
        else if((iNo2 < iNo1) && (iNo2 < iNo3))
        {
            System.out.println(iNo2+" is smallest");
        } 
        else
        {
            System.out.println(iNo3+" is smallest");
        }
    }
}

class program79
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findMin(20,15,3);
    }
}