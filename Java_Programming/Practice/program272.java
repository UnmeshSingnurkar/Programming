import java.util.Scanner;

class StringX
{
    public int CountCapital(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountSmall(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program272
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

        System.out.println("Number of capital characters are : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of small characters are : "+iRet);
    }
}