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

int main()
{
    PNODE head = NULL;
    
    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;
    bool bRet = false;

    while(iChoice != 9)
    {
        printf("------------------------------------------\n");
        printf("Enter your Choice : \n");
        printf("------------------------------------------\n");
        printf("1 : Insert node at First Position\n");
        printf("2 : Insert node at Last Position\n");
        printf("3 : Insert node at Given Position\n");
        printf("4 : Delete node at First Position\n");
        printf("5 : Delete node at Last Position\n");
        printf("6 : Delete node at Given Position\n");
        printf("7 : Display the Elements\n");
        printf("8 : Count the Number of Elements\n");
        printf("9 : Search Elements in the List\n");
        printf("10 : Terminate the Application\n");
        printf("------------------------------------------\n");

        scanf("%d",&iChoice);

        switch (iChoice)
        {
        case 1:
            printf("Enter the Value : ");
            scanf("%d",&iValue);

            InsertFirst(&head,iValue);
            break;

        case 2:
            printf("Enter the Value : ");
            scanf("%d",&iValue);

            InsertLast(&head,iValue);
            break;

        case 3:
            printf("Enter the Value : ");
            scanf("%d",&iValue);

            printf("Enter the Position : ");
            scanf("%d",&iPosition);

            InsertAtPos(&head,iValue,iPosition);
            break;
        
        case 4:
            DeleteFirst(&head);
            break;

        case 5:
            DeleteLast(&head);
            break;

        case 6:
            printf("Enter the Position : ");
            scanf("%d",&iPosition);

            DeleteAtPos(&head,iPosition);
            break;

        case 7:
            printf("Elements of the Linked List are :\n");
            Display(head);
            break;

        case 8:
            iRet = Count(head);
            printf("Number of Elements are : %d\n",iRet);
            break;

        case 9:
            printf("Enter the Value to be searched : ");
            scanf("%d",&iValue);

            bRet = Search(head,iValue);

            if(bRet == true)
            {
                printf("Element found\n");
            }
            else
            {
                printf("Element not found\n");
            }

            break;
        
        case 10:
            printf("Thank you for using Marvellous Infosystems Application\n");
            break;
        
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}
