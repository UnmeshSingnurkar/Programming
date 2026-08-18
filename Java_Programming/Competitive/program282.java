import java.util.Scanner;

class program282
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0;
        int iDigit = 0;
        int iSum = 0;
        int iSq = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iSq = iNo * iNo;

        while(iSq != 0)
        {
            iDigit = iSq % 10;
            iSum = iSum + iDigit;
            iSq = iSq / 10;
        }

        if(iNo == iSum)
        {
            System.out.println("It is neon number");
        }
        else
        {
            System.out.println("It is not a neon number");
        }
    }
}