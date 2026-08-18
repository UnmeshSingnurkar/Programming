import java.util.Scanner;

class program280
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0;
        int iDigit = 0;
        int iSum = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iSum = iSum + iDigit;
            itemp = itemp / 10;
        }

        if(iNo % iSum == 0)
        {
            System.out.println("It is harshad number");
        }
        else
        {
            System.out.println("It is not a harshad number");
        }
    }
}