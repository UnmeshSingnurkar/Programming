import java.util.*;

class program290
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String str1 = null;

        System.out.println("Enter String :");
        str1 = sobj.nextLine();

        HashMap <Character , Integer>hobj = new HashMap<Character , Integer>();

        char Arr[] = str1.toCharArray();

        for (char ch : Arr)
        {
            if(ch >= 'a' && ch <= 'z')
            {
                hobj.put(ch, 1);
            }
        }

        if(hobj.size() == 26)
        {
        System.out.println("It is Pangram");
        }
        else
        {
            System.out.println("It is not a Pangram");
        }
               
    }
}