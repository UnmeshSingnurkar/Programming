import java.util.Scanner;

class program272
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int N = 0;
        int iDuplicate = 0;

        System.out.println("Enter Number of votes :");
        N = sobj.nextInt();

        int ID[] = new int[N];
        
        if(N < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        System.out.println("Enter Voter ID's :");

        for(int i = 0; i < N ; i++)
        {
            ID[i] = sobj.nextInt();

            if(ID[i] < 0)
            {
                System.out.println("Invalid Input");
                return; 
            }
        }

        for(int i = 0; i < N ; i++)
        {
            for(int j = i+1; j < N ; j++)
            {
                if(ID[i] == ID[j])
                {
                    iDuplicate++; 
                }
            }
        }

        System.out.println("Valid Votes : "+(ID.length-iDuplicate));
        System.out.println("Duplicate Votes : "+iDuplicate);
    }
}