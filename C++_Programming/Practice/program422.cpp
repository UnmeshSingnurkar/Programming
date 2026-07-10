#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
    struct node * prev;             // $
};

typedef struct node NODE;
typedef struct node * PNODE;        

class DoublyLL
{
    private :
        PNODE first;
        int iCount;

    public:

        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL :: DoublyLL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;
    this->iCount= 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = this -> first;

    cout<<"NULL <-> ";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <-> ";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

int DoublyLL :: Count()
{
    return iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this->first->prev = newn;
        this -> first = newn;
    }

    this->iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)  
        {
            temp = temp-> next;
        }
        
        newn -> prev = temp;        // $
        temp -> next = newn;
    }

    this->iCount++;
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    iCount = Count();

    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Input\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount +1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = this->first;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        newn -> next-> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
        
        this->iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(this->first);
        this->first = NULL;
    }   
    else
    {
        this->first = this->first->next;
        delete(this->first->prev);
        this->first->prev = NULL;
    }
    this->iCount--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(this->first);
        this->first = NULL;
    }   
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
    }
    this->iCount--;
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    iCount = Count();

    PNODE temp = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Input\n";
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

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete(temp->next->prev);
        temp -> next -> prev = temp;

        this->iCount--;
    }
}

int main()
{
    DoublyLL dobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while(iChoice != 9)
    {
        cout<<"------------------------------------------\n";
        cout<<"Enter your Choice : \n";
        cout<<"------------------------------------------\n";
        cout<<"1 : Insert node at First Position\n";
        cout<<"2 : Insert node at Last Position\n";
        cout<<"3 : Insert node at Given Position\n";
        cout<<"4 : Delete node at First Position\n";
        cout<<"5 : Delete node at Last Position\n";
        cout<<"6 : Delete node at Given Position\n";
        cout<<"7 : Display the Elements\n";
        cout<<"8 : Count the Number of Elements\n";
        cout<<"9 : Terminate the Application\n";
        cout<<"------------------------------------------\n";

        cin>>iChoice;

        switch (iChoice)
        {
        case 1:
            cout<<"Enter the Value : ";
            cin>>iValue;

            dobj.InsertFirst(iValue);
            break;

        case 2:
            cout<<"Enter the Value : ";
            cin>>iValue;

            dobj.InsertLast(iValue);
            break;

        case 3:
            cout<<"Enter the Value : ";
            cin>>iValue;

            cout<<"Enter the Position : ";
            cin>>iPosition;

            dobj.InsertAtPos(iValue,iPosition);
            break;
        
        case 4:
            dobj.DeleteFirst();
            break;

        case 5:
            dobj.DeleteLast();
            break;

        case 6:
            cout<<"Enter the Position : ";
            cin>>iPosition;

            dobj.DeleteAtPos(iPosition);
            break;

        case 7:
            cout<<"Elements of the Linked List are :\n";
            dobj.Display();
            break;

        case 8:
            iRet = dobj.Count();
            cout<<"Number of Elements are : "<<iRet<<endl;
            break;
        
        case 9:
            cout<<"Thank you for using Marvellous Infosystems Application\n";
            break;
        
        default:
            cout<<"Invalid Choice\n";
        }
    }

    return 0;
}