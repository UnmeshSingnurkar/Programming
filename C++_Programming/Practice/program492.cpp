#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
struct node
{
    T data;
    struct node * next;
};

#pragma pack(1)
template<class T>
class Stack
{
    private:
        struct node<T> * first;
        int iCount;

    public:
        Stack();
        void Push(T iNo);     // InsertFirst
        T Pop();              // DeleteFirst
        T Peep();             // Like DeleteFirst (will not delete the value)
        void Display();
        int Count();
};

template<class T>
Stack<T> :: Stack()
{
    this->first = NULL;
    this->iCount = 0;
}

template<class T>
void Stack<T> :: Push(T iNo)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

template<class T>
T Stack<T> :: Pop() 
{
    T iValue = 0;

    struct node<T> * temp = NULL;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        temp = this->first;
        iValue = this->first->data;

        this->first = this->first->next;
        delete temp;

        this->iCount--;
        
        return iValue;
    }
}

template<class T>
T Stack<T> :: Peep() 
{
    T iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue = this->first->data;
        
        return iValue;
    }
}

template<class T>
void Stack<T> :: Display()
{
    struct node<T> * temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

template<class T>
int Stack<T> :: Count()
{
    return iCount;
}

int main()
{
    Stack <int>sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements in Stack are : "<<iRet<<endl;

    iRet = sobj.Pop();
    cout<<"Popped Element is : "<<iRet<<endl;

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements in Stack are : "<<iRet<<endl;

    iRet = sobj.Peep();
    cout<<"Element is : "<<iRet<<endl;

    sobj.Display();
    
    return 0;
}