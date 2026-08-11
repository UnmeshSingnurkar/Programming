import java.util.Scanner;

class StringX
{
    public String Update(String str)
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == 'A' || Arr[iCnt] == 'a')
            {
                Arr[iCnt] = '_';
            }
        }

        return new String(Arr);
    }
}

class program279
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.Update(data);

        System.out.println("Updated String is : "+sRet);
    }
}