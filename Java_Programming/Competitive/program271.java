import java.util.Scanner;

class program271
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iDays = 0;
        int iAmt = 0;

        System.out.println("Enter Days :");
        iDays = sobj.nextInt();

        if(iDays < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(iDays <= 7)
        {
            iAmt = iDays * 3000;
        }
        else
        {
            iAmt = iDays * 3000;
            iAmt = iAmt - (iAmt  * 5 / 100);
        }

        System.out.println("Total Stay Duration : "+iDays);
        System.out.println("Final Bill Amount : "+iAmt);
      
    }
}