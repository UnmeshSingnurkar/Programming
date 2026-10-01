#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

#pragma pack(1)
class Stack
{
    private:
        struct node * first;
        int iCount;

    public:
        Stack();
        void Push(int iNo);     // InsertFirst
        int Pop();              // DeleteFirst
        int Peep();             // Like DeleteFirst (will not delete the value)
        void Display();
        int Count();
};

Stack :: Stack()
{
    this->first = NULL;
    this->iCount = 0;
}

void Stack :: Push(int iNo)
{
    struct node * newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

int Stack :: Pop() 
{
    int iValue = 0;

    struct node * temp = NULL;

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

int Stack :: Peep() 
{
    return 0;
}

void Stack :: Display()
{
    struct node * temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return iCount;
}

int main()
{
    Stack sobj;
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
    
    return 0;
}