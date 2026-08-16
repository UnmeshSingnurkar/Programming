import java.util.Scanner;

class program252
{
    public static double Withdraw(double dCurrentBal, double dWithAmt)
    {
        if(dCurrentBal < 0 || dWithAmt <= 0)
        {
            return -1;
        }
        else if(dWithAmt > dCurrentBal)
        {
            return -2;
        }
        else if(dWithAmt % 100 != 0)
        {
            return -3;
        }
        else if(dWithAmt > 25000)
        {
            return -4;
        }
        else if((dCurrentBal - dWithAmt) < 1000)
        {
            return -5;
        }

        
        dCurrentBal = dCurrentBal - dWithAmt;

        return dCurrentBal;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        double dCurrentBal = 0.0;
        double dWithAmt = 0.0;
        double dRet = 0.0;

        System.out.println("Enter Current Balance :");
        dCurrentBal = sobj.nextInt();

        System.out.println("Enter Amount to be withdrawn :");
        dWithAmt = sobj.nextInt();

        dRet = Withdraw(dCurrentBal, dWithAmt);
        
        if(dRet == -1)
        {
            System.out.println("Invalid input");
        }
        else if(dRet == -2)
        {
            System.out.println("Withdrawal Amount is greater than Current Balance");
        }
        else if(dRet == -3)
        {
            System.out.println("Withdrawn Amount must be a multiple of Rs100");
        }
        else if(dRet == -4)
        {
            System.out.println("Maximum withdrawal per transaction is Rs25000");
        }
        else if(dRet == -5)
        {
            System.out.println("After withdrawal min bal should remain Rs1000");
        }
        else
        {
            System.out.println("Tansaction Successfull");
            System.out.println("Remaining Balance : "+dRet);
        }
    }
}