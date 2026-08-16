import java.util.Scanner;

class program251
{
    public static int FineCalculator(int iDays)
    {
        int iFine = 0;
        int i = 25;

        if(iDays < 0)
        {
            iFine = -1;
        }
        else if(iDays >= 0 && iDays <=7)
        {
            iFine = 0;
        }
        else if(iDays > 7 && iDays <= 12)
        {
            iFine = (iDays - 7) * 5;
        }
        else if(iDays > 12)
        {
            iFine = i + ((iDays - 12) * 10);
        }

        return iFine;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iDays = 0;
        int iRet = 0;

        System.out.println("Enter number of days book taken :");
        iDays = sobj.nextInt();

        iRet = FineCalculator(iDays);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else if(iRet == 0)
        {
            System.out.println("Returned on time. No fine applicable");
        }
        else
        {
            System.out.println("Total fine to be paid : Rs"+iRet);
        }
    }
}