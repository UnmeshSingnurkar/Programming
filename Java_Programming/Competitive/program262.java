import java.util.Scanner;

class program262
{
    public static int Scholarship(float fMarks,float fAttendance, long iIncome )
    {
        if(fMarks < 0 || fMarks > 100 || fAttendance < 0 || fAttendance > 100 || iIncome < 0)
        {
            return -1;
        }

        if(fMarks < 80)
        {
            return -2;
        }

        if(fAttendance < 75)
        {
            return -3;
        }

        if(iIncome > 300000)
        {
            return -4;
        }

        return 0;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        float fMarks = 0.0f;
        float fAttendance = 0.0f;
        long iIncome = 0;

        int iRet = 0;

        System.out.println("Enter Marks(%) :");
        fMarks = sobj.nextFloat();

        System.out.println("Enter Attendance(%) :");
        fAttendance = sobj.nextFloat();

        System.out.println("Enter Income :");
        iIncome = sobj.nextInt();

        iRet = Scholarship(fMarks, fAttendance, iIncome);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else if(iRet == -2)
        {
            System.out.println("Scholarship Rejected : Marks are low");
        }
        else if(iRet == -3)
        {
            System.out.println("Scholarship Rejected : Attendance is low");
        }
        else if(iRet == -4)
        {
            System.out.println("Scholarship Rejected : Income should be less than Rs300000");
        }
        else
        {
            System.out.println("Scholarship Approved");
        }
    }
}