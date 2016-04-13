#include<iostream>
#define ElemType int
using namespace std;

typedef struct LNode
{
    ElemType data;
    struct LNode *next;

}LNode,*LLIST;

class LinkList
{
private:
    int length;
    LLIST phead;
public:
    LinkList(void);
    ~LinkList(void);
    void add(ElemType);
    void insert(int,ElemType);
    bool remove(int,ElemType &e);
    bool empty();
    int find(ElemType);
    void print();
    int getLength();
    ElemType getElem(int);
    void reverse();//逆置
    int pattern(LinkList);//判断子链
    LLIST getHead();
};

LinkList::LinkList(void)
{
    //cout<<"LinkList"<<endl;
    phead=new LNode;
    phead->next=NULL; //带头结点单向链表
    length=0;
    //cout<<"OK"<<endl;
}

LinkList::~LinkList(void)
{
    phead->data=NULL;
    phead->next=NULL;
    delete phead;
    length=0;
}

void LinkList::add(ElemType e)
{
    //cout<<"add:"<<e<<endl;
    LLIST ln=new LNode;
    ln->data=e;
    ln->next=phead->next;
    phead->next=ln;
    length++;
    //cout<<"add ok"<<endl;
}

bool LinkList::empty()
{
    if(length==0){return 1;}
    else{return 0;}
}

bool LinkList::remove(int i,ElemType &e)
{
    int j=0;
    LLIST p=phead;
    while(p->next&&j<i-1)
    {
        p=p->next;
        j++;
    }
    if(!(p->next)||j>i-1){return false;}
    e=p->next->data;
    p->next=p->next->next;
    length--;
    return true;
}

void LinkList::insert(int i,ElemType e)
{
    LLIST ln=new LNode;
    ln->data=e;
    int j=0;
    LLIST p=phead;
    while(p->next&&j<i-1)
    {
        p=p->next;
        j++;
    }
    ln->next=p->next;
    p->next=ln;
    length++;
}

int LinkList::find(ElemType e)
{
    LLIST p=phead;
    int i=0;
    while(p->next)
    {
        i++;
        if(e==p->next->data){return i;}
        else{p=p->next;}
    }
    return -1;
}

void LinkList::print()
{
    LLIST p=phead;
    while(p->next)
    {
        cout<<p->next->data<<",";
        p=p->next;
    }
}

int LinkList::getLength()
{
    return length;
}

ElemType LinkList::getElem(int i)
{
    int j=0;
    LLIST p=phead;
    while(p->next&&j<i-1)
    {
        p=p->next;
        j++;
    }
    if(!(p->next)||j>i-1){return -1;}
    else{return p->next->data;}

}

void LinkList::reverse()
{
    LLIST p=phead->next;
    LLIST p2=phead->next;
    while(NULL!=p->next)
    {
        p=p->next;
        this->add(p->data);
    }
    p2->next=NULL;
}

LLIST LinkList::getHead()
{
    return phead;
}

int LinkList::pattern(LinkList Lb)
{
    LLIST p=phead->next;
    LLIST pre=p;
    LLIST q=Lb.getHead()->next;
    while(p&&q)
    {
        if(p->data==q->data)
        {
            p=p->next;
            q=q->next;
        }
        else
        {
            pre=pre->next;
            p=pre;
            q=Lb.getHead()->next;
        }
    }
    if(q==NULL){return 1;}
    else{return 0;}
}

void MergeList(LinkList la,LinkList lb,LinkList &lc)
{

    int i=1,j=1,k=1;
    while((i<=la.getLength())&&(j<=lb.getLength()))
    {
        if(la.getElem(i)<=lb.getElem(j))
        {
            lc.insert(k++,la.getElem(i++));
        }
        else
        {
            lc.insert(k++,lb.getElem(j++));
        }
    }
    while(i<=la.getLength())
    {
        lc.insert(k++,la.getElem(i++));
    }
    while(j<=lb.getLength())
    {
        lc.insert(k++,lb.getElem(j++));
    }
}


int main()
{
    LinkList list;
    list.add(5);
    list.add(3);
    list.add(2);
    list.add(1);
    list.add(0);
    int i=list.find(3);
    cout<<"find:"<<i<<endl;
    list.print();
    cout<<endl;


    //list.insert(5,4);
    //list.print();
    //cout<<endl;

    LinkList lb;
    lb.add(3);
    lb.add(2);
    lb.add(1);
    //lb.add(2);
    lb.print();
    cout<<endl;

    cout<<list.pattern(lb);

    //LinkList lc;
    //MergeList(list,lb,lc);
    //lc.print();
    //cout<<endl;

    //lc.reverse();
    //lc.print();
    //cout<<list.getLength()<<endl;

    //cout<<list.getElem(2)<<endl;

    //int k;
    //list.remove(2,k);
    //cout<<k;


    return 0;
}
