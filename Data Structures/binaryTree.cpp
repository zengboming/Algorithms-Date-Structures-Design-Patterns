#include<iostream>
#include<queue>
#define ElemType int
using namespace std;

typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

class BinaryTree
{
private:
    BiTree tree;
    int high;
    int num;
public:
    BinaryTree();
    ~BinaryTree();
    BiTree Create();
    bool Empty();
    //int getDeep();
    int getNum();
    //ElemType value();
    //BiTree leftChild();
    //BiTree rightChild();
    BiTree Root();
    //void InsertL();
    //void InsertR();
    //void DeleteL();
    //void DeleteR();

    void PreOrder(BiTree);
    void InOrder(BiTree);
    void PostOrder(BiTree);
    void LevelOrder();


};

BinaryTree::BinaryTree()
{
    tree=new BiTNode;
    high=0;
    num=0;
    tree=this->Create();

}

BinaryTree::~BinaryTree()
{
    tree->lchild=NULL;
    tree->rchild=NULL;
    delete tree;
    high=0;
    num=0;
}

BiTree BinaryTree::Create()
{
    ElemType elem;
    cout<<"plz cin data(root-left-right):";
    cin>>elem;
    BiTree Tnode=new BiTNode;
    if(elem==-1)
    {
        Tnode=NULL;
    }
    else
    {
        Tnode->data=elem;
        num++;
        Tnode->lchild=Create();
        Tnode->rchild=Create();
    }
    return Tnode;
}

bool BinaryTree::Empty()
{
    if(tree==NULL)
    {
        return true;
    }
    else{return false;}
}

int BinaryTree::getNum()
{
    return num;
}

BiTree BinaryTree::Root()
{
    return tree;
}

void BinaryTree::PreOrder(BiTree T)
{
    if(T!=NULL)
    {
        cout<<T->data<<" ";
        this->PreOrder(T->lchild);
        this->PreOrder(T->rchild);
    }
}

void BinaryTree::InOrder(BiTree T)
{
    if(T!=NULL)
    {
        this->InOrder(T->lchild);
        cout<<T->data<<" ";
        this->InOrder(T->rchild);
    }
}

void BinaryTree::PostOrder(BiTree T)
{
    if(T!=NULL)
    {
        this->PostOrder(T->lchild);
        this->PostOrder(T->rchild);
        cout<<T->data<<" ";
    }
}

void BinaryTree::LevelOrder()
{
    queue<BiTree> que;
    BiTree T=new BiTNode;
    que.push(tree);
    while(!que.empty())
    {
        T=que.front();
        que.pop();
        cout<<T->data<<" ";
        if(T->lchild!=NULL)
        {
            que.push(T->lchild);
        }
        if(T->rchild!=NULL)
        {
            que.push(T->rchild);
        }
    }
}

int main()
{
    BinaryTree bt;
    bt.PreOrder(bt.Root());
    cout<<endl;
    bt.InOrder(bt.Root());
    cout<<endl;
    bt.PostOrder(bt.Root());
    cout<<endl;
    bt.LevelOrder();
    cout<<endl;
    cout<<bt.Empty();
    return 0;
}
