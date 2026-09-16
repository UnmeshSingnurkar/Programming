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
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE first;

        SinglyLL()
        {
            this->first = NULL;
            cout<<"Inside Constructor\n";
        }

};

int main()
{
    SinglyLL sobj;

    return 0;
}