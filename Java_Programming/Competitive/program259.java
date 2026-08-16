import java.util.Scanner;

class program259    
{
    public static int Fine(String sHelmet, String sLicense, String sOverspeeding)
    {
        int iFine = 0;

        if( sHelmet.equals("Yes") == false &&
            sHelmet.equals("No") == false &&
            sLicense.equals("Yes") == false &&
            sLicense.equals("No") == false &&
            sOverspeeding.equals("Yes") == false &&
            sOverspeeding.equals("No") == false)
        {
            return -1;
        }

        if(sHelmet.equals("No"))
        {
            iFine = iFine + 500;
        }

        if(sLicense.equals("No"))
        {
            iFine = iFine + 1000;
        }

        if(sOverspeeding.equals("No"))
        {
            iFine = iFine + 1500;
        }
        
        return iFine;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String sHelmet = null;
        String sLicense = null;
        String sOverspeeding = null;
        int iRet = 0;

        System.out.println("Helmet Worn (Yes/No) :");
        sHelmet = sobj.nextLine();

        System.out.println("License Availbale (Yes/No) :");
        sLicense = sobj.next();

        System.out.println("Overspeeding (Yes/No) :");
        sOverspeeding = sobj.next();

        iRet = Fine(sHelmet,sLicense,sOverspeeding);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Total Fine Amount : Rs"+iRet);
        }
    }
}