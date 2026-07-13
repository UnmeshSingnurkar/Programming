// Input : 11
// Output : *   *   *   #   #   #   *   *   *   #   #

import java.util.*;

class program188
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;  

        for(iCnt = 1,iCount = 1; iCnt <= iNo; iCnt++)           
        {
            if(iCount <= 3)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print("#\t");
            }

            iCount++;

            if(iCount > 6)
            {
                iCount = 1;
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