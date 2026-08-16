import java.util.Scanner;

class program256
{
    public static float CalculateCharges(float fHours)
    {
        float fAns = 0.0f;

        if(fHours < 0)
        {
            return  -1;
        }

        if(fHours <= 2)
        {
            fAns = 20;
        }
        else
        {
            fAns = 20 + ((fHours - 2) * 10);

            if(fHours > 10)
            {
                fAns = fAns + 50;
            }
        }

        return fAns;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        float fHours = 0.0f;
        float fRet = 0.0f;

        System.out.println("Enter parking hours :");
        fHours = sobj.nextFloat();

        fRet = CalculateCharges(fHours);

        if(fRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Total Parking Durantion : "+fHours);
            System.out.println("Total Parking Fees : Rs"+fRet);
        }
    }
}