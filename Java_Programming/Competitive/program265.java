import java.util.Scanner;

class program265
{
    public static void BatteryStatus(float fBattery)
    {
        if(fBattery < 0)
        {
            System.out.println("Invalid Input");
            return ;
        }

        if(fBattery <= 5)
        {
            System.out.println("Critical");
        }
        else if(fBattery <= 15)
        {
            System.out.println("Low");
        }
        else
        {
            System.out.println("Normal");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        float fBattery = 0.0f;

        System.out.println("Enter Battery(%) :");
        fBattery = sobj.nextFloat();

        BatteryStatus(fBattery);
    }
}