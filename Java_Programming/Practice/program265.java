import java.util.*;

class program265
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
        int iCnt = 0;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Length of String is : "+Arr.length());

        char str[] = Arr.toCharArray();

        for(iCnt = 0; iCnt < str.length; iCnt++)
        {
            System.out.println(str[iCnt]);
        }
    }
}