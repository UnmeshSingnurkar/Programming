import java.util.Scanner;

class program287
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0, itemp = 0, i = 0, j = 1;
        int iDigit = 0;
        int iDigitCnt = 0;
        int iSum = 0;
        int iRev = 0;
        int iCube = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        itemp = iNo;
        iCube = iNo * iNo * iNo;

        while(itemp != 0)
        {
            iDigitCnt++;
            itemp = itemp / 10;
        }

        while(iCube != 0)
        {
            if(i >= iDigitCnt)
            {
                break;
            }

            iDigit = iCube % 10;
            iRev = iRev + (iDigit * j);
            iCube = iCube    / 10;
            i++;
            j = j * 10;
        }

        if(iNo == iRev)
        {
            System.out.println("It is Trimorphic number");
        }
        else
        {
            System.out.println("It is not a Trimorphic number");
        }
    }
}