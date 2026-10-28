#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;            
};      

class BST
{
    private :
        static struct node * first;
        int iCount;

    public:

        BST();
        void Inorder(struct node * temp = first);
        void Postorder(struct node * temp = first);
        void Preorder(struct node * temp = first);
        void Insert(int iNo);
        int Count();
        int CountLeaf(struct node * temp = first);
        int CountParent(struct node * temp = first);
        bool Search(int iNo);
};

BST :: BST()
{
    iCount= 0;
}

struct node * BST :: first = NULL;

void BST :: Inorder(struct node * temp)
{
    if (temp != NULL)
    {
        Inorder(temp->lchild);
        cout<<temp->data<<endl;
        Inorder(temp->rchild);
    }
}

void BST :: Preorder(struct node * temp)
{
    if (temp != NULL)
    {
        cout<<temp->data<<endl;
        Preorder(temp->lchild);
        Preorder(temp->rchild);
    }
}

void BST :: Postorder(struct node * temp)
{
    if (temp != NULL)
    {
        Postorder(temp->lchild);
        Postorder(temp->rchild);
        cout<<temp->data<<endl;
    }
}

void BST :: Insert(int iNo)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    newn = new struct node;

    newn -> data = iNo;
    newn -> lchild = NULL;
    newn -> rchild = NULL;

    if(NULL == first)
    {
        first = newn;
        iCount++;
    }
    else
    {
        temp = first;

        while(1)
        {
            if(iNo > temp -> data)
            {
                if(temp -> rchild == NULL)
                {
                    temp -> rchild = newn;
                    iCount++;
                    break;
                }

                temp = temp -> rchild;
            }
            else if (iNo < temp -> data)
            {
                if(temp -> lchild == NULL)
                {
                    temp -> lchild = newn;
                    iCount++;
                    break;
                }

                temp = temp -> lchild;
            }
            else if(iNo == temp->data)
            {
                cout<<"Unable to insert as element is duplicate\n";
                delete newn;
                break;
            }
        }
        
    }
}

bool BST :: Search(int iNo)
{
    bool bFlag = false;
    struct node * temp = NULL;

    temp = first;

    while (temp != NULL)
    {
        if(iNo == temp->data)
        {
            bFlag = true;
            break;
        }         
        else if(iNo > temp->data)
        {
            temp = temp -> rchild;
        }
        else if(iNo < temp->data)
        {
            temp = temp->lchild;
        }
    }

    return bFlag; 
}

int BST :: CountLeaf(struct node * temp)
{
    static int iCountLeaf = 0;

    if(temp != NULL)
    {
        if((temp -> lchild == NULL) && (temp -> rchild == NULL))
        {
            iCountLeaf++;
        }

        CountLeaf(temp->lchild);
        CountLeaf(temp->rchild);
    }

    return iCountLeaf;
}

int BST :: CountParent(struct node * temp)
{
    static int iCountParent = 0;

    if(temp != NULL)
    {
        if((temp -> lchild != NULL) || (temp -> rchild != NULL))
        {
            iCountParent++;
        }

        CountParent(temp->lchild);
        CountParent(temp->rchild);
    }

    return iCountParent;
}

int BST::Count()
{
    return iCount;
}

int main()
{
    BST bobj;

    bobj.Insert(51);
    bobj.Insert(21);
    bobj.Insert(101);
    bobj.Insert(11);
    bobj.Insert(121);

    cout<<"Inorder :\n";
    bobj.Inorder();

    cout<<"Preorder :\n";
    bobj.Preorder();

    cout<<"Postorder :\n";
    bobj.Postorder();

    cout << bobj.CountLeaf() << endl;
    cout << bobj.CountLeaf() << endl;

    return 0;
}