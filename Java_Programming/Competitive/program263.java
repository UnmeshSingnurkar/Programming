import java.util.Scanner;

class program263
{
    public static float CourierCal(float fWeight)
    {
        float fCharges = 0.0f;

        if(fWeight < 0)
        {
            return -1;
        }

        if(fWeight <= 1)
        {
            fCharges = 50;
        }
        else if(fWeight <= 5)
        {
            fCharges = 50 + ((fWeight - 1) * 20);
        }
        else
        {
            fCharges = 150 +((fWeight - 5) * 30);
        }

        return fCharges;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        float fWeight = 0.0f;

        float fRet = 0.0f;

        System.out.println("Enter Parcel Weight(kg) :");
        fWeight = sobj.nextFloat();

        fRet = CourierCal(fWeight);

        if(fRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Parcel Weight : "+fWeight);
            System.out.println("Courier Charges : Rs"+fRet);
        }
    }
}