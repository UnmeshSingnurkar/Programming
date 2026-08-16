import java.util.Scanner;

class program276
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int N = 0;
        int M = 0;
        int i = 0, j = 0, k = 0;
        int iBooked = 0;
        int iMax = 0;
        int iFull = 0;
        int iRow = 0;

        System.out.println("Enter number of rows :");
        N = sobj.nextInt();

        System.out.println("Enter number of seats in each row :");
        M = sobj.nextInt();

        if(N < 0 || M < 0)
        {
            System.out.println("Invalid Input");
        }

        int Arr[][] = new int[N][M];

        System.out.println("Enter bookings : ");

        for(i = 0 ;i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                System.out.println((i+1)+" : "+(j+1)+" : ");
                Arr[i][j] = sobj.nextInt();

                if(Arr[i][j] != 0 && Arr[i][j] != 1)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        for(i = 0 ;i < N; i++)
        {
            k = 0;

            for(j = 0; j < M; j++)
            {
                if(Arr[i][j] == 1)
                {
                    iBooked++;
                    k++;
                }
            }

            if(k > iMax)
            {
                iMax = k;
                iRow = i+1;
            }

            if(k == M)
            {
                iFull++;
            }
        }

        System.out.println("Total seats booked : "+iBooked);
        System.out.println("Row with Maximum bookings : Row "+iRow);

        if(iFull > 0)
        {
            System.out.println("Full row exists : Yes");
            System.out.println("Count of full rows : "+iFull);
        }
        else
        {
            System.out.println("Full row exists : No");
        }

        for(i = 0 ;i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                System.out.printf("%d\t",Arr[i][j]);
            }
            System.out.println();
        }

    }
}