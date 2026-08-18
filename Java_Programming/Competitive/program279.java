import java.util.Scanner;

class program278
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, i = 0;
        int iDigit = 0;
        int iSum = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        for(i = 1; i <= (iNo/2); i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iNo == iSum)
        {
            System.out.println("It is perfect number");
        }
        else
        {
            System.out.println("It is not a perfect number");
        }
    }
}