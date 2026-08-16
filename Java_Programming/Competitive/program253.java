import java.util.Scanner;

class program253
{
    public static void Result(int Arr[])
    {
        float fAverage = 0;
        int iSum = 0;
        int i =0;

        for(i = 0; i < 5; i++)
        {
            if(Arr[i] < 0 || Arr[i] > 100)
            {
                System.err.println("Marks Should be between 0 and 100");
                return;
            }
            if(Arr[i] < 35)
            {
                System.out.println("FAILED");
                return;
            }

            iSum = iSum + Arr[i];
        }

        fAverage = (iSum/500.0f) * 100;

        if(fAverage >= 75)
        {
            System.out.println("Distinction");
        }
        else if(fAverage >= 60)
        {
            System.out.println("First Class");
        }
        else if(fAverage >= 50)
        {
            System.out.println("Second Class");
        }
        else
        {
            System.out.println("Pass");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[] = new int[5];

        for(int i = 0; i < 5;i++)
        {
            System.out.println("Enter marks of "+(i+1)+" subject :");
            Arr[i] = sobj.nextInt();
        }

        Result(Arr);

    }
}