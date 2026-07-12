// Input : 7
// Output : 1   *   3   *   5   *   7    
import java.util.*;

class program176
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
        {
            if(iCnt == iNo)
            {
                System.out.print(iCnt);  
            }
            else
            {
                System.out.print(iCnt+"\t*\t");
            }
        }

        System.out.println();
    } 

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of Elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}