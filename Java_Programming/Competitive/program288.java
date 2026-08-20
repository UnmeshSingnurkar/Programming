import java.util.Scanner;

class program288
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String str1 = null;
        String strRev = null;

        System.out.println("Enter String :");
        str1 = sobj.nextLine();

        StringBuffer str2 = new StringBuffer(str1);
        str2 = str2.reverse();

        String str3 = new String(str2);


        if(str1.equals(str3))
        {
            System.out.println("It is Palindrome");
        }
        else
        {
            System.out.println("It is not a Palindrome");
        }
    }
}