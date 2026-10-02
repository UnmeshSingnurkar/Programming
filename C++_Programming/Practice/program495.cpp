#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
struct node
{
    T data;
    struct node * next;
};

template<class T>
class SinglyCL
{
    private:
        struct node<T> * first;
        struct node<T> * last;
        int iCount;
    
    public:
        SinglyCL();

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
SinglyCL<T> :: SinglyCL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template<class T>
void SinglyCL<T> :: Display()
{
    struct node<T> * temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | ->";
        temp = temp->next;
    } while (temp != last->next);

    cout<<endl;    
}

template<class T>
int SinglyCL<T> :: Count()
{
    return this->iCount;
}

template<class T>
void SinglyCL<T> :: InsertFirst(int iNo)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->last -> next = this->first;
    this->iCount++;
}

template<class T>
void SinglyCL<T>:: InsertLast(int iNo)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = newn;
    }

    this->last -> next = this->first;
    this->iCount++;
}

template<class T>
void SinglyCL<T> :: InsertAtPos(int iNo, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    iCount = Count();

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalide Position\n";
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
        newn -> data = iNo;
        newn -> next = NULL;

        temp = first;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp ->next = newn;

        this->iCount++;
    }
}

template<class T>
void SinglyCL<T> :: DeleteFirst()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->first = this->first -> next;
        delete(this->last->next);
        this->last->next = this->first;
    }

    this->iCount--;
}

template<class T>
void SinglyCL<T> :: DeleteLast()
{
    struct node<T> * temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp = first;

        while(temp -> next != last)
        {
            temp = temp->next;
        }

        delete(temp->next);
        last = temp;
        last->next = first;        
    }

    this->iCount--;
}

template<class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    iCount = Count();

    struct node<T> * temp = NULL;
    struct node<T> * target = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalide Position\n";
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

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        target = temp->next;
        temp->next = target->next;
        delete(target);

        this->iCount--;
    }
}

int main()
{
    SinglyCL <int>sobj;

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