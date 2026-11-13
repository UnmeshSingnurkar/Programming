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

#define MAXINODE 5

void CreateDILB()
{
    int i = 0;

    PINODE temp = head;
    PINODE newn = NULL;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));
        newn->data = i;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;

        }
        else
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newn;
        }
    }

}

void DisplatDILB()
{
    PINODE temp = head;

    while(temp != NULL)
    {
        printf("| %d | -> ",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    CreateDILB();
    DisplatDILB();

    return 0;
}