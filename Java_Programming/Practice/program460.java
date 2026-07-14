class node
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        data = no;
        next = null;
        prev = null;
    }
}

class DoublyCL
{
    private node first;
    private node last;
    private int iCount;

    public DoublyCL()
    {
        first = null;
        last = null;
        iCount = 0;
    }

    public void Display()
    {
        if(first == null && last == null)
        {
            System.out.println("Linked list is empty");
            return;
        }
        
        node temp = null;
        temp = first;

        System.out.printf(" <=> ");
        do
        {
            System.out.printf("| %d | <=> ",temp.data);
            temp = temp.next;
        }while(temp != last.next);

        System.out.println();
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = null;
        newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        last.next = first;
        first.prev = last;

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;
        newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            newn.prev = last;
            last = newn;
        }

        last.next = first;
        first.prev = last;

        iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node temp = null;
        node newn = null;

        int iCnt = 0;

        if((iPos < 1) || (iPos > iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(iNo);
        }
        else
        {
            newn = new node(iNo);
            temp = first;

            for(iCnt = 1; iCnt < (iPos-1); iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn;

            newn.prev = temp;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
            first.prev = last;
            last.next = first;
        }
        
        iCount--;
    }

    public void DeleteLast()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first ==last)
        {
            first = null;
            last = null;
        }
        else
        {
            last = last.prev;
            last.next = first;
            first.prev = last;
        }
        
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;

        int iCnt = 0;

        if((iPos < 1) || (iPos > iCount))
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(iCnt = 1; iCnt < (iPos-1); iCnt++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;

            iCount--;
        }
    }
}

class program460
{
    public static void main(String A[])
    {
        DoublyCL sobj = new DoublyCL();

        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteFirst();

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteLast();

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.InsertAtPos(105,4);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteAtPos(4);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);
    }
}