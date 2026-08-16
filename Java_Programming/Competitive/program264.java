import java.util.Scanner;

class program264
{
    public static float Store(float fBudget, int n, float Arr[])
    {
        if(fBudget < 0 || n < 0 )
        {
            return -1;
        }

        return 0;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        float fBudget = 0.0f;
        int n = 0;
        float Arr[] = new float[n];

        System.out.println("Enter Budget :");
        fBudget = sobj.nextFloat();

        System.out.println("Enter no items :");
        n = sobj.nextInt();

        System.out.println("Enter prices of items :");

        for(int i = 0; i < n; i++) 
        {
            Arr[i] = sobj.nextFloat();
        }

        Store(fBudget,n,Arr);
    }
}