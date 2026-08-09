import java.util.Scanner;

class StringX
{
    public void Display(String str)
    {
        System.out.println("Recieved String is : "+str);
    }
}

class program269
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        strobj.Display(data);
    }
}