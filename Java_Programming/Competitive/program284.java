import java.util.Scanner;

class program284
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0;
        int iDigit = 0;
        int iSum = 0;
        int iProd = 1;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;
        
        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iSum = iSum + iDigit;
            itemp = itemp / 10;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProd = iProd * iDigit;
            iNo = iNo / 10;
        }

        if(iSum == iProd)
        {
            System.out.println("It is Spy number");
        }
        else
        {
            System.out.println("It is not a Spy number");
        }
    }
}