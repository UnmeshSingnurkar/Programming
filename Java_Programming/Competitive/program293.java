import java.util.*;

class program293
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

        StringBuffer sb = null;
        StringBuffer Finalstr = new StringBuffer("");

        for(int i = 0; i < Tokens.length; i++)
        {
            sb = new StringBuffer(Tokens[i]);
            sb = sb.reverse();
            Finalstr = Finalstr.append(sb+" ");
        }   

        String Final = new String(Finalstr);
        Final = Final.trim();

        System.out.println(Final); 
    }
}