import java.util.Scanner;

class program260  
{
    public static long TaxCal(long lIncome)
    {
        long TaxAmt = 0;

        if(lIncome < 0)
        {
            return -1;
        }

        if(lIncome <= 250000)
        {
            TaxAmt = 0;
        }
        else if(lIncome > 250000 && lIncome <= 500000)
        {
            TaxAmt = lIncome * 5 / 100;
        }
        else if(lIncome > 500000 && lIncome <= 1000000)
        {
            TaxAmt = lIncome * 20 / 100;
        }
        else
        {
            TaxAmt = lIncome * 30 / 100;
        }
        
        return TaxAmt;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        long lIncome = 0;
        long iRet = 0;

        System.out.println("Annual Income :");
        lIncome = sobj.nextInt();

        iRet = TaxCal(lIncome);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Annual Income : Rs"+lIncome);
            System.out.println("Total Tax Payable : Rs"+iRet);
        }
    }
}