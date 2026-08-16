import java.util.Scanner;

class program254
{
    public static int ElectricityBill(int iUnit)
    {
        int iAns = 0;

        if(iUnit < 0)
        {
            return  -1;
        }

        if(iUnit <= 100)
        {
            iAns = iUnit * 5;
        }
        else if(iUnit <=200)
        {
            iAns = 500 + ((iUnit -100) * 7);
        }
        else
        {
            iAns = 1200 + ((iUnit - 200) * 10);
        }

        return iAns;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iUnit = 0;
        int iRet = 0;

        System.out.println("Enter units consumed :");
        iUnit = sobj.nextInt();

        iRet = ElectricityBill(iUnit);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Total Units Consumed : "+iUnit);
            System.out.println("Total Electricity Bill : Rs"+iRet);
        }
    }
}