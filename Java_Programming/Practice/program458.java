class node
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    private node first;
    private int iCount;

    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;
        temp = this.first;

        while(temp != null)
        {
            System.out.printf("| %d | <-> ",temp.data);
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            this.first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        this.iCount++;
    }

    void InsertLast(int iNo)
    {
        node temp = null;
        node newn = new node(iNo);
        
        if(first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            newn.prev = temp;
            temp.next = newn;
        }

        this.iCount++; 
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node newn = null;
        node temp = null;

        int iCnt = 0;

        if((iPos < 1) || (iPos > iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }
        
        if(iPos == 1)
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
            
            temp.next = newn;
            newn.prev = temp;

            this.iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
            first.prev = null;
        }

        this.iCount--;
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }

        this.iCount--;
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
        
        if(iPos == 1)
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

            this.iCount--;
        }
    }
}

class program458
{
    public static void main(String A[])
    {
        DoublyLL sobj = new DoublyLL();

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