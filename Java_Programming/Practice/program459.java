class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCL
{
    private node first;
    private node last;
    private int iCount;

    public SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;
        temp = this.first;

        if(first == null && last == null)
        {
            System.out.println("Linked list is empty");
            return;
        }

        System.out.printf(" -> ");
        
        do
        {
            System.out.printf("| %d | -> ",temp.data);
            temp = temp.next;
        }while(temp != last.next);

        System.out.println();
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            this.first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        last.next = first;

        this.iCount++;
    }

    void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        
        if(first == null)
        {
            this.first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            last = newn;
        }

        last.next = first;

        this.iCount++; 
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        int iCnt = 0;

        node newn = null;
        node temp = null;

        if((iPos < 1)|| (iPos > iCount+1))
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
        }

        last.next = first;

        iCount--;
    }

    public void DeleteLast()
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
            node temp = null;
            temp = first;

            while(temp.next.next != first)
            {
                temp = temp.next;
            }
            last = temp;
            last.next = first;   
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
            last.next = first;

            this.iCount--;
        }
    }
}

class program459
{
    public static void main(String A[])
    {
        SinglyCL sobj = new SinglyCL();

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