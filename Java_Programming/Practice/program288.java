import java.util.Scanner;

class StringX
{
    public String toUpperX(String str)
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }               
        }

        return new String(Arr);
    }

    public String toLowerX(String str)
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }               
        }

        return new String(Arr);
    }

    public String Toggle(String str)
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);         // Issue
            }               
        }

        return new String(Arr);
    }
}

class program288
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.toUpperX(data);
        System.out.println("Updated String is : "+sRet);

        sRet = strobj.toLowerX(data);
        System.out.println("Updated String is : "+sRet);

        sRet = strobj.Toggle(data);
        System.out.println("Updated String is : "+sRet);
    }
}