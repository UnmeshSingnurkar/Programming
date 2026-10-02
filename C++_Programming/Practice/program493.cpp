#include<iostream>
using namespace std;


#pragma pack(1)
template<class T>
struct node
{
    int data;
    struct node<T> * next;
};

#pragma pack(1)
template<class T>
class Queue
{
    private:
        struct node <T>* first;
        int iCount;

    public:
        Queue();
        void Enqueue(int iNo);     // InsertLast
        int Dequeue();              // DeleteFirst
        void Display();
        int Count();
};

template<class T>
Queue<T> :: Queue()
{
    this->first = NULL;
    this->iCount = 0;
}

template<class T>
void Queue<T> :: Enqueue(int iNo)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
    }

    this->iCount++;
}

template<class T>
int Queue<T> :: Dequeue() 
{
    int iValue = 0;

    struct node<T> * temp = NULL;

    if(first == NULL)
    {
        cout<<"Queue is Empty\n";
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
void Queue<T> :: Display()
{
    struct node * temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

template<class T>
int Queue<T> :: Count()
{
    return iCount;
}

int main()
{
    Queue <int>sobj;
    int iRet = 0;

    sobj.Enqueue(11);
    sobj.Enqueue(21);
    sobj.Enqueue(51);
    sobj.Enqueue(101);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements in Queue are : "<<iRet<<endl;

    iRet = sobj.Dequeue();
    cout<<"Removed Element is : "<<iRet<<endl;

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements in Queue are : "<<iRet<<endl;
    
    return 0;
}