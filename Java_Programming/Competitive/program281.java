import java.util.Scanner;

class program281
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0;
        int iDigit = 0;
        int iRev = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iRev = (iRev * 10) + iDigit;
            itemp = itemp / 10;
        }

        if(iNo == iRev)
        {
            System.out.println("It is palindrome number");
        }
        else
        {
            System.out.println("It is not a palindrome number");
        }
    }
}