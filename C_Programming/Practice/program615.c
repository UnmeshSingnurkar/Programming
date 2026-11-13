#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node INODE;
typedef struct node* PINODE;
typedef struct node** PPINODE;

PINODE head = NULL;

#define MAXINODE 10

void CreateDILB()
{
    int i = 0;


}

void DisplatDILB()
{
    PINODE temp = head;

    while(temp != NULL)
    {
        printf("| %d | -> ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    CreateDILB();

    return 0;
}