import java.util.*;

class program294
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String str = null;

        System.out.println("Enter String :");
        str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");
        String Tokens[] = str.split(" ");

        int iMax = 0;
        String temp = null;

        for(int i = 0; i < Tokens.length; i++)
        {
            if(Tokens[i].length() > iMax)
            {
                iMax = Tokens[i].length();
                temp = Tokens[i];
            }
        }

        System.out.println("Longest word is : "+temp);
    }
}