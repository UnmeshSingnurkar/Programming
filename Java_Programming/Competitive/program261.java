import java.util.Scanner;

class program261
{
    public static float CalFare(float fDist, String sAns)
    {
        float fBase = 50;
        float fAmt = 0.0f;

        if(fDist < 0)
        {
            return -1;
        }

        if((sAns.equals("Yes") == false) && (sAns.equals("No") == false))
        {
            return  -2;
        }
        
        if(fDist < 10)
        {
            fAmt = fBase + (fDist * 12);
        }
        else
        {
            fAmt = fBase + 120 + ((fDist - 10) * 15);
        }

        if(sAns.equals("Yes"))
        {
            fAmt = fAmt + (fAmt * 20 /100);
        }

        return  fAmt;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        float fDist = 0;
        String sAns = null;
        float fRet = 0;

        System.out.println("Enter Distance travlled (Km) :");
        fDist = sobj.nextFloat();

        System.out.println("Peak Hour (Yes/No) :");
        sAns = sobj.next();

        fRet = CalFare(fDist, sAns);

        if(fRet == -1)
        {
            System.out.println("Invalid Amount");
        }
        else if(fRet == -2)
        {
            System.out.println("Invalid Peak Hour Answer");
        }
        else
        {
            System.out.println("Distance <km> : "+fDist);
            System.out.println("Peak Hours : "+sAns);
            System.out.println("Total Fare : Rs"+fRet);
        }
    }
}