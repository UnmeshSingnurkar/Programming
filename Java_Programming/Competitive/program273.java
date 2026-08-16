import java.util.Scanner;

class program273
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iGoal = 0;
        int iSteps[] = new int[7];
        int iAchieve = 0;
        int iMax = 0;

        System.out.println("Enter Goal:");
        iGoal = sobj.nextInt();
        
        if(iGoal < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        System.out.println("Enter Steps :");

        for(int i = 0; i < 7 ; i++)
        {
            iSteps[i] = sobj.nextInt();

            if(iSteps[i] < 0)
            {
                System.out.println("Invalid Input");
                return; 
            }
        }

        for(int i = 0; i < 7 ; i++)
        {
            if(iSteps[i] >= iGoal)
            {
                iAchieve++;
            }

            if(iSteps[i] > iMax)
            {
                iMax = iSteps[i];
            }
        }

        System.out.println("Goal achieved (days) : "+iAchieve);
        System.out.println("Maximum steps in a week : "+iMax);
    }
}