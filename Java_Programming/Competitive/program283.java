import java.util.Scanner;

class program283
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0, i = 0, j = 1;
        int iDigit = 0;
        int iDigitCnt = 0;
        int iSum = 0;
        int iRev = 0;
        int iSq = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;
        iSq = iNo * iNo;

        while(itemp != 0)
        {
            iDigitCnt++;
            itemp = itemp / 10;
        }

        while(iSq != 0)
        {
            if(i >= iDigitCnt)
            {
                break;
            }

            iDigit = iSq % 10;
            iRev = iRev + (iDigit * j);
            iSq = iSq / 10;
            i++;
            j = j * 10;
        }

        if(iNo == iRev)
        {
            System.out.println("It is Automorphic number");
        }
        else
        {
            System.out.println("It is not a Automorphic number");
        }
    }
}