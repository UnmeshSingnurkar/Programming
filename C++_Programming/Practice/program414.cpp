#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private :
        PNODE first;
        int iCount;

    public:

        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL :: SinglyLL()
{
    this->first = NULL;
    this->iCount= 0;
}

void SinglyLL :: Display()
{
    PNODE temp = NULL;
    temp = this -> first;

    while(temp != NULL)
    {
        cout<<"| "<<temp -> data<<" | -> ";
        temp = temp -> next;
    }

    cout<<"NULL\n";
}

int SinglyLL :: Count()
{
    return iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(NULL == this->first)
    {
        this -> first  = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }

    this->iCount++;                     // IMPORTANT
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(NULL == this->first)
    {
        this -> first  = newn;
    }
    else
    {
        temp = this->first;

        while(NULL != temp -> next)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }

    this->iCount++;
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    int iCnt = 0;
    
    PNODE temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(iPos == 1)
    {
        this -> InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        this -> InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;

        temp = this -> first;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;

        this -> iCount++;
    }
}

void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(NULL == this -> first)
    {
        return;
    }
    else if(NULL == this -> first -> next)
    {
        delete(this->first);
        this->first = NULL;
    }
    else
    {
        temp = this -> first;

        this->first = this->first->next;
        
        delete(temp);
    }

    this->iCount--;
}

void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(NULL == this -> first)
    {
        return;
    }
    else if(NULL == this -> first -> next)
    {
        delete(this->first);
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while (NULL != temp->next->next)
        {
            temp = temp -> next;
        }

        delete(temp->next);
        temp -> next = NULL;
    }

    this->iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    int iCnt = 0;
    
    PNODE temp = NULL;
    PNODE target = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
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
        temp = this -> first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp-> next;
        temp-> next = target -> next;
        delete target;

        this->iCount--;
    }
}

int main()
{
    SinglyLL sobj;

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

            sobj.InsertFirst(iValue);
            break;

        case 2:
            cout<<"Enter the Value : ";
            cin>>iValue;

            sobj.InsertLast(iValue);
            break;

        case 3:
            cout<<"Enter the Value : ";
            cin>>iValue;

            cout<<"Enter the Position : ";
            cin>>iPosition;

            sobj.InsertAtPos(iValue,iPosition);
            break;
        
        case 4:
            sobj.DeleteFirst();
            break;

        case 5:
            sobj.DeleteLast();
            break;

        case 6:
            cout<<"Enter the Position : ";
            cin>>iPosition;

            sobj.DeleteAtPos(iPosition);
            break;

        case 7:
            cout<<"Elements of the Linked List are :\n";
            sobj.Display();
            break;

        case 8:
            iRet = sobj.Count();
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