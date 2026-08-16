import java.util.Scanner;

class program267
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iDist = 0;
        int iBookHrBefore = 0;
        int iAge = 0;
        int iFare = 0;

        String sClassType = null;

        System.out.println("Enter Distance :");
        iDist = sobj.nextInt();

        System.out.println("Enter Hours before booking :");
        iBookHrBefore = sobj.nextInt();

        System.out.println("Enter Age :");
        iAge = sobj.nextInt();

        System.out.println("Enter Class Type (Sleeper/3AC/2AC) :");
        sClassType = sobj.next();

        if(iDist < 0 || iBookHrBefore < 0 || iAge <= 0 || (sClassType.equals("Sleeper") == false && sClassType.equals("3AC") == false && sClassType.equals("2AC") == false ))
        {
            System.out.println("Invalid Input");
            return;
        }

        if(iDist < 200)
        {
            if(sClassType.equals("Sleeper"))
            {
                iFare = 500;

                if(iBookHrBefore < 24)
                {
                    iFare = iFare + (iFare * 30 / 100);
                }

                if(iAge > 60)
                {
                    iFare = iFare - (iFare * 40 / 100);
                }
            }
            else if(sClassType.equals("3AC"))
            {
                iFare = 800;

                if(iBookHrBefore < 24)
                {
                    iFare = iFare + (iFare * 30 / 100);
                }

                if(iAge > 60)
                {
                    iFare = iFare - (iFare * 40 / 100);
                }
            }
            else if(sClassType.equals("2AC"))
            {
                iFare = 1000;

                if(iBookHrBefore < 24)
                {
                    iFare = iFare + (iFare * 30 / 100);
                }

                if(iAge > 60)
                {
                    iFare = iFare - (iFare * 40 / 100);
                }
            }
        }
        else
        {
            if(sClassType.equals("Sleeper"))
            {
                iFare = 800;

                if(iBookHrBefore < 24)
                {
                    iFare = iFare + (iFare * 30 / 100);
                }

                if(iAge > 60)
                {
                    iFare = iFare - (iFare * 40 / 100);
                }
            }
            else if(sClassType.equals("3AC"))
            {
                iFare = 1000;

                if(iBookHrBefore < 24)
                {
                    iFare = iFare + (iFare * 30 / 100);
                }

                if(iAge > 60)
                {
                    iFare = iFare - (iFare * 40 / 100);
                }
            }
            else if(sClassType.equals("2AC"))
            {
                iFare = 1020;

                if(iBookHrBefore < 24)
                {
                    iFare = iFare + (iFare * 30 / 100);
                }

                if(iAge > 60)
                {
                    iFare = iFare - (iFare * 40 / 100);
                }
            }
        }

        System.out.println("Fare : " + iFare);        
    }
}