import java.util.*;

class program296
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String str = null;

        System.out.println("Enter String :");
        str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCountVowel = 0;
        int iCountConst = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a' && Arr[i] <= 'z') || (Arr[i] >= 'A' && Arr[i] <= 'Z'))
            {
                if( Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o' || Arr[i] == 'u' ||
                    Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I' || Arr[i] == 'O' || Arr[i] == 'U' )
                {
                    iCountVowel++;
                }
                else
                {
                    iCountConst++;
                }
            }
        }

        System.out.println("Vowels : "+iCountVowel);
        System.out.println("Consonants : "+iCountConst);
    }
}