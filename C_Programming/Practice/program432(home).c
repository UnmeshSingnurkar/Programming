#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first, PNODE last)
{
    PNODE temp = NULL;

    temp = first;

    do
    {
        printf("| %d | <-> ",temp->data);
        temp = temp -> next;
    } while ((last)->next != temp);

    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    PNODE temp = NULL;

    temp = first;

    do
    {
        iCount++;
        temp = temp -> next;
    } while ((last)->next != temp);

    return iCount;
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->prev = *last;
        (*last)->next = newn;
        *last = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first,*last);

    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid Position\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(first,last,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        newn->prev = temp;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*last)->next);
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}

void DeleteLast(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)-> prev;
        free((*first)->prev);
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE temp = NULL;

    iCount = Count(*first,*last);

    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid Position\n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first,last);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Nodes are : %d\n",iRet);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Nodes are : %d\n",iRet);

    DeleteFirst(&head,&tail);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Nodes are : %d\n",iRet);

    DeleteLast(&head,&tail);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Nodes are : %d\n",iRet);

    InsertAtPos(&head,&tail,105,4);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Nodes are : %d\n",iRet);

    DeleteAtPos(&head,&tail,4);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Nodes are : %d\n",iRet);

    return 0;
}