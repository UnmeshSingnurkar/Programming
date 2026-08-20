import java.util.*;

class program291
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
                if(hobj.containsKey(ch))
                {
                    hobj.put(ch, hobj.get(ch)+1);
                }
                else
                {
                    hobj.put(ch, 1);
                }
            }
        }

        for(char ch : hobj.keySet())
        {
            if(hobj.get(ch) >= 2)
            {
                System.out.print(ch+"\t");
            }
        }

        System.out.println()    ;     
    }
}