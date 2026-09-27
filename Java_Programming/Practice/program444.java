class node
{
    public int Data;
    public node next;
}

class program444
{
    public static void main(String A[])
    {
        node newn = null;
        newn = new node();

        newn.Data = 11;
        newn.next = null;
        
        System.out.println(newn.Data);
        System.out.println(newn.next);
    }
}