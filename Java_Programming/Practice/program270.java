import java.util.Scanner;

class StringX
{
    public int CountCapital(String str)
    {
        int iCount = 0, iCnt = 0;

        for(iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if(str.charAt(iCnt) >= 'A' && str.charAt(iCnt) <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program270
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Capital Alphabets are : "+iRet);
    }
}