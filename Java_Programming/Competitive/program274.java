import java.util.Scanner;

class program274
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iMinutes = 0;
        int iCharges = 0;

        System.out.println("Enter call duration in Minutes:");
        iMinutes = sobj.nextInt();
        
        if(iMinutes < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(iMinutes <= 5)
        {
            iCharges = 0;
        }
        if(iMinutes <= 15)
        {
            iCharges = (iMinutes-5)*1;
        }
        else
        {
            iCharges = 10 + ((iMinutes - 15) * 2);
        }

        System.out.println("Call Duration : "+iMinutes);
        System.out.println("Total Call Charges: "+iCharges);
    }
}