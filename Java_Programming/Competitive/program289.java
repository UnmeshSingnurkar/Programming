import java.util.*;

class program289
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String str1 = null;
        String str2 = null;

        System.out.println("Enter String :");
        str1 = sobj.nextLine();

        System.out.println("Enter String :");
        str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("It is not Anagram");
        }
        else
        {
            char Arr[] = str1.toCharArray();
            char Brr[] = str2.toCharArray();

            Arrays.sort(Arr);
            Arrays.sort(Brr); 

            str1 = new String(Arr);
            str2 = new String(Brr);

            if(str1.equals(str2))
            {
            System.out.println("It is Anagram");
            }
            else
            {
                System.out.println("It is not a Anagram");
            }
        }        
    }
}