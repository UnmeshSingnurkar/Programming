import java.util.Scanner;

class program277
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0;
        int iDigit = 0;
        int iSum = 0, iFact = 1;
        int i = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            for(i = 1, iFact = 1; i <= iDigit; i++)
            {
                iFact = iFact * i;
            }

            iSum = iSum + iFact;
            
            iNo = iNo / 10;
        }

        if(itemp == iSum)
        {
            System.out.println("It is strong number");
        }
        else
        {
            System.out.println("It is not a strong number");
        }
    }
}