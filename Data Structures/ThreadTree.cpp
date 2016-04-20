#include<iostream>
#define ElemType int
#define LINK 0
#define THREAD 1
using namespace std;

typedef struct ThreadNode
{
    ElemType data;
    struct ThreadNode *lchild,*rchild;
    int Ltag,Rtag;
}ThreadNode,*ThreadTree;

class Thread_Tree
{
private:
    ThreadTree root,pre,p,start;
    void InThread(ThreadTree &);
    void CreateInThread();
public:
    Thread_Tree();
    ~Thread_Tree();
    ThreadTree CreateTree();
    void InOrder();
};

Thread_Tree::Thread_Tree()
{
    //root=pre=p=start=new ThreadNode;
    root=pre=p=NULL;
    root=CreateTree();
}

Thread_Tree::~Thread_Tree()
{
    root=pre=start=NULL;
    delete root;
}

ThreadTree Thread_Tree::CreateTree()
{
    ElemType elem;
    cout<<"plz cin data(root-left-right):";
    cin>>elem;
    ThreadTree Tnode=new ThreadNode;
    if(elem==-1)
    {
        Tnode=NULL;
    }
    else
    {
        Tnode->data=elem;
        Tnode->lchild=this->CreateTree();
        Tnode->rchild=this->CreateTree();
    }
    return Tnode;
}

void Thread_Tree::InThread(ThreadTree &p)
{
    if(p!=NULL)
    {
        InThread(p->lchild);
        if(p->lchild==NULL)
        {
            p->lchild=pre;
            p->Ltag=THREAD;
        }
        if(pre->rchild==NULL&&pre!=NULL)
        {
            pre->rchild=p;
            pre->Rtag=THREAD;
        }
        pre=p;
        InThread(p->rchild);
    }
}

void Thread_Tree::CreateInThread()
{
    if(root!=NULL)
    {
        this->InThread(root);
        pre->rchild=NULL;
        pre->Rtag=THREAD;
    }
}

void Thread_Tree::InOrder()
{

}

int main()
{
    return 0;
}
