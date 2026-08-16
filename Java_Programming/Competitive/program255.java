import java.util.Scanner;

class program255
{
    public static double DiscountCal(double  dAmount, String sMembership)
    {
        double dDiscount = 0.0;
        double dDisAmt = 0.0,dDis = 0.0;

        if(dAmount < 0)
        {
            return -1;
        }

        if((sMembership.equals("Regular") == false) && (sMembership.equals("Premium") == false))
        {
            return  -2;
        }

        if(dAmount >= 5000)
        {
            dDiscount = dAmount * 20 / 100;
        }
        else if(dAmount >= 2000)
        {
            dDiscount = dAmount * 10 / 100;
        }

        dDisAmt = dAmount - dDiscount;

        if(sMembership.equals("Premium"))
        {
            dDis = dDisAmt * 5 / 100;
            dDiscount = dDiscount + dDis;
        }

        return  dDiscount;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        double dAmount = 0.0;
        String sMembership = null;
        double dRet = 0;

        System.out.println("Enter Amount :");
        dAmount = sobj.nextInt();

        System.out.println("Enter Membership Type(Regular/Premium) :");
        sMembership = sobj.next();

        dRet = DiscountCal(dAmount, sMembership);

        if(dRet == -1)
        {
            System.out.println("Invalid Amount");
        }
        else if(dRet == -2)
        {
            System.out.println("Invalid Membership Type");
        }
        else
        {
            System.out.println("Original Amount : "+dAmount);
            System.out.println("Total Discount : "+dRet);
            System.err.println("Final Payable Amount : "+(dAmount-dRet));
        }
    }
}