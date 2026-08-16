import java.util.Scanner;

class program258
{
    public static int StockAvail(int iCurrent, int iReq)
    {

        if(iCurrent < 0 || iReq < 0)
        {
            return -1;
        }

        if(iReq > iCurrent)
        {
            return -2;
        }

        iCurrent = iCurrent - iReq;
        
        return iCurrent;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iCurrent = 0;
        int iReq = 0;
        int iRet = 0;

        System.out.println("Enter Current stock quantity :");
        iCurrent = sobj.nextInt();

        System.out.println("Enter Requested quantity :");
        iReq = sobj.nextInt();

        iRet = StockAvail(iCurrent,iReq);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else if(iRet == -2)
        {
            System.out.println("Order Failed! Insufficent Stock");
        }
        else
        {
            System.out.println("Order Processed Successfully");
            System.out.println("Remaining Stock : "+iRet);
             
            if(iRet < 5)
            {
                System.out.println("Low Stock Alert!");
            }
        }
    }
}