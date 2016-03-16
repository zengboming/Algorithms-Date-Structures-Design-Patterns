#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct treenode  //动态二叉树结点
{
    int data;
    struct treenode *lchild,*rchild;
}tree,* treelink;

void com(treelink t)
{
    if(t->lchild==NULL)
        cout<<"L  0"<<endl;
    else
        cout<<"L  1"<<endl;
}

int main()
{
    treelink t;
    int a=1;
    t=(treelink)malloc(sizeof(tree));
    t->data=a;
    t->lchild=NULL;
    t->rchild=NULL;
    com(t);

    return 0;
}
