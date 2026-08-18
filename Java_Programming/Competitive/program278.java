import java.util.Scanner;

class program278
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp1 = 0, itemp2 = 0;;
        double iDigit = 0;
        double iDigitCnt = 0;
        double iSum = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp1 = iNo;
        itemp2 = iNo;

        while(itemp1 != 0)
        {
            iDigitCnt++;
            itemp1 = itemp1 / 10;
        }

        while(itemp2 != 0)
        {
            iDigit = itemp2 % 10;
            iSum = iSum + (Math.pow(iDigit, iDigitCnt));
            itemp2 = itemp2 / 10;
        }

        if(iNo == iSum)
        {
            System.out.println("It is armstrong number");
        }
        else
        {
            System.out.println("It is not a armstrong number");
        }
    }
}