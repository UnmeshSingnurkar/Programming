#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

#pragma pack(1)

template<class T>
class DoublyCL
{
    private:
        struct node<T> * first;
        struct node<T> * last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template<class T>
DoublyCL<T> :: DoublyCL()
{
    cout<<"Inside Constructor\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

template<class T>
void DoublyCL<T> :: Display()
{
    if(first == NULL)
    {
        cout<<"Linked List is empty\n";
        return;
    }
    
    struct node<T> * temp = NULL;

    temp = first;

    cout<<" <=> ";
    do
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp -> next;
    } while (temp != last->next);

    cout<<endl;
}

template<class T>
int DoublyCL<T> :: Count()
{
    return iCount;
}

template<class T>
void DoublyCL<T> :: InsertFirst(int iNo)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
     
    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    last->next = first;
    first->prev = last;

    iCount++;
}

template<class T>
void DoublyCL<T> :: InsertLast(int iNo)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
     
    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    last->next = first;
    first->prev = last;

    iCount++;
}

template<class T>
void DoublyCL<T>:: InsertAtPos(int iNo, int iPos)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    int iCnt = 0;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
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
        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < (iPos-1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template<class T>
void DoublyCL<T> :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete(last->next);
    }

    first->prev = last;
    last->next = first;

    iCount--;
}

template<class T>
void DoublyCL<T> :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete(last->next);
    }

    first->prev = last;
    last->next = first;

    iCount--;
}

template<class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{
    struct node<T> * temp = NULL;

    int iCnt = 0;

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
        temp = first;

        for(iCnt = 1; iCnt < (iPos-1); iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;

        iCount--;
    }
}

int main()
{
    DoublyCL <int>dobj;
    
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