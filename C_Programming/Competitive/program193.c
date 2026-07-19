#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)                            
    {
        printf("| %d | -> ",first -> data);
        first = first -> next;
    }

    printf("NULL\n");   
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)                            
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(NULL == *first)                                       
    {
        *first = newn;
    }
    else                                    
    {
        newn -> next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)                     
    {
        *first = newn;
    }
    else                                    
    {
        temp = *first;
        
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;
    
    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid Positon\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(first,iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = iNo;
        newn -> next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < (iPos-1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn; 
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                      
    {
        return;
    }
    else if((*first) -> next == NULL)       
    {
        free(*first);
        *first = NULL;
    }
    else                                    
    {
        temp = *first;
        *first = (*first) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                    
    {
        return;
    }
    else if((*first) -> next == NULL)       
    {
        free(*first);
        *first = NULL;
    }
    else                                    
    {
        temp = *first;

        while((temp -> next -> next) != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);
        temp -> next = NULL;
    }
}

void DeleteAtPos(PPNODE first, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid Positon\n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        
        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next = target -> next;
        
        free(target);
    }
}

bool Search(PNODE first,int iNo)
{
    bool bFlag = false;

    while(first != NULL)                            
    {
        if(first->data == iNo)
        {
            bFlag = true;
            break;
        }
        first = first -> next;
    }

    return bFlag;
}

int CountEven(PNODE first)
{
    int iCountEven = 0;

    while(first != NULL)                            
    {
        if((first->data) % 2 == 0)
        {
            iCountEven++;
        }
        first = first -> next;
    }

    return iCountEven;
}

int CountOdd(PNODE first)
{
    int iCountOdd = 0;

    while(first != NULL)                            
    {
        if((first->data) % 2 != 0)
        {
            iCountOdd++;
        }
        first = first -> next;
    }

    return iCountOdd;
}

int Frequency(PNODE first,int iNo)
{
    int iCount = 0;

    while(first != NULL)                            
    {
        if((first->data) == iNo)
        {
            iCount++;
        }
        first = first -> next;
    }

    return iCount;
}

void DisplayEven(PNODE first)
{
    while(first != NULL)                            
    {
        if((first->data) % 2 == 0)
        {
            printf("%d\t",first->data);
        }
        first = first -> next;
    }
    printf("\n");
}

void DisplayOdd(PNODE first)
{
    while(first != NULL)                            
    {
        if((first->data) % 2 != 0)
        {
            printf("%d\t",first->data);
        }
        first = first -> next;
    }
    printf("\n");
}

int FirstOccur(PNODE first, int iNo)
{
    int iCount = 0;

    while(first != NULL)                            
    {
        iCount++;
        if((first->data) == iNo)
        {
            break;
        }
        first = first -> next;
    }

    return iCount;
}

int LastOccur(PNODE first, int iNo)
{
    int iCount = 0, iLastOcc = 0;
    

    while(first != NULL)                            
    {
        iCount++;
        if((first->data) == iNo)
        {
            iLastOcc = iCount;
        }
        first = first -> next;
    }

    return iLastOcc;
}

int main()
{
    PNODE head = NULL;
    
    int iRet = 0;
    bool bRet = false;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,22);
    InsertLast(&head,51);
    InsertLast(&head,52);
    InsertLast(&head,101);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);
    
    bRet = Search(head,11);

    if(bRet == true)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    iRet = CountEven(head);
    printf("Number of even elements are : %d\n",iRet);

    iRet = CountOdd(head);
    printf("Number of odd elements are : %d\n",iRet);

    iRet = Frequency(head,101);
    printf("Frequency is : %d\n",iRet);

    DisplayEven(head);
    DisplayOdd(head);

    iRet = FirstOccur(head,101);
    printf("First Occurance : %d\n",iRet);

    iRet = LastOccur(head,101);
    printf("Last Occurance : %d\n",iRet);
    
    return 0;
}
