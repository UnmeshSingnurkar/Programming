import java.util.Scanner;

class program275
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int N = 0;
        int M = 0;
        int iSum = 0;
        int iMax = 0, iIndex = 0;
        int iFail = 0;
        int i = 0, j = 0;

        System.out.println("Enter number of students :");
        N = sobj.nextInt();

        System.out.println("Enter number of subjects :");
        M = sobj.nextInt();

        if(N < 0 || M < 0)
        {
            System.out.println("Invalid Input");
            return;
        }
        
        int Arr[][] = new int[N][M];

        System.out.println("Enter marks");

        for(i = 0 ;i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                System.out.println((i+1)+" : "+(j+1)+" : ");
                Arr[i][j] = sobj.nextInt();

                if(Arr[i][j] > 100 || Arr[i][j] < 0)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        for(i = 0 ;i < N; i++)
        {
            for(j = 0, iSum = 0; j < M; j++)
            {
                iSum = iSum + Arr[i][j];
            }

            if(iSum > iMax)
            {
                iMax = iSum;
                iIndex = i;
            }

            if(iSum < 35)
            {
                iFail++;
            }

            System.out.println("Student "+(i+1)+" : "+iSum);
        }

        System.out.println("Topper Student : "+iIndex);

        for(i = 0; i < M; i++)
        {
            for(j = 0,iSum = 0; j < N; j++)
            {
                iSum = iSum + Arr[j][i];
            }
            System.out.println("Subject "+(i+1)+" (avg) : "+iSum);
        }

        System.out.println("Students failed : "+iFail);
    }
}