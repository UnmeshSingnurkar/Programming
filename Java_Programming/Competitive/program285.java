import java.util.Scanner;

class program285
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        double iNo = 0, itemp = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iNo = iNo + 1;

        itemp = Math.sqrt(iNo);
        

        if(itemp * itemp == iNo)
        {
            System.out.println("It is Sunny number");
        }
        else
        {
            System.out.println("It is not a Sunny number");
        }
    }
}