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

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->iCount++;
}

int Stack :: Pop() 
{
    return 0;
}

int Stack :: Peep() 
{
    return 0;
}

void Stack :: Display()
{}

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

    iRet = sobj.Count();
    cout<<"Number of elements in Stack are : "<<iRet<<endl;

    return 0;
}