/*
    iRow = 6
    iCol = 6

    *
    *   *
    *   *   *
    *   *   *   *

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        if(iRow != iCol)        
        {
            System.out.println("Invalid Paramenters\nNumber of rows and column should be same");
            return; 
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print("*\t");      
            }
            System.out.println();
        }   
    }
}

class program223
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        pobj.Display(iValue1,iValue2);
    }
}