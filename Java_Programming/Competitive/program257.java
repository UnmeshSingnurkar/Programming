import java.util.Scanner;

class program257
{
    public static int LoanApproval(int iAge, long iIncome, int iCreditScore, String sLoan)
    {
        if(iAge < 0 || iIncome < 0 || iCreditScore < 0)
        {
            return -1;
        }

        if(sLoan.equals("Yes") == false && sLoan.equals("No") == false)
        {
            return -1;
        }

        if(iAge > 60 || iAge < 21)
        {
            return -2;
        }

        if(iIncome < 25000)
        {
            return -3;
        }

        if(iCreditScore < 700)
        {
            return -4;
        }

        if(sLoan.equals("Yes"))
        {
            return -5;
        }

        return 0;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iAge = 0;
        long iIncome = 0;
        int iCreditScore = 0;
        String sLoan = null;
        int iRet = 0;

        System.out.println("Enter age :");
        iAge = sobj.nextInt();

        System.out.println("Enter Income :");
        iIncome = sobj.nextInt();

        System.out.println("Enter Credit Score :");
        iCreditScore = sobj.nextInt();

        System.out.println("Any Existing Loan (Yes/No) :");
        sLoan = sobj.next();

        iRet = LoanApproval(iAge,iIncome,iCreditScore,sLoan);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else if(iRet == -2)
        {
            System.out.println("Loan Rejected : Age range not matched");
        }
        else if(iRet == -3)
        {
            System.out.println("Loan Rejected : Income should be above 25000");
        }
        else if(iRet == -4)
        {
            System.out.println("Loan Rejected : Credit Score must be above 700");
        }
        else if(iRet == -5)
        {
            System.out.println("Loan Rejected : There is an existing loan");
        }
        else
        {
            System.out.println("Loan Approved");
        }
    }
}