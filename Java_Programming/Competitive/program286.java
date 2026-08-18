import java.util.Scanner;

class program286
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0,itemp2 = 0;
        int iDigit = 0;
        int iSum = 0;
        int iDigitCnt = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;
        itemp2 = iNo;

        while(itemp2 != 0)
        {
            iDigitCnt++;
            itemp2 = itemp2 / 10;
        }

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iSum = iSum + (int)Math.pow(iDigit, (iDigitCnt));
            itemp = itemp / 10;
            iDigitCnt--;
        }
        

        if(iSum == iNo)
        {
            System.out.println("It is Disarium number");
        }
        else
        {
            System.out.println("It is not a Disarium number");
        }
    }
}