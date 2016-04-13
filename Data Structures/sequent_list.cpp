#include<iostream>
#define ElemType int
using namespace std;

class SqList
{
private:
    ElemType *elem;
    int length;    //当前长度(下标+1)
    int listsize;  //最大长度
public:
    SqList(int);
    ~SqList();
    bool empty();
    int getLength();
    bool getElem(int,ElemType &e);
    bool insert(int,ElemType);
    bool del(int);
    int find(ElemType);
    void all();
    void reverse();
    void reverse(int,int);
};

SqList::SqList(int size)
{
    elem=new ElemType[size];
    length=0;
    listsize=size;
}

SqList::~SqList()
{
    delete[] elem;
}

bool SqList::empty()
{
    if(length==0) { return 1; }
    else { return 0; }
}

int SqList::getLength()
{
    return length;
}

bool SqList::getElem(int i,ElemType &e)
{
    if(i>0&&i<=length)
    {
        e=elem[i-1];
        return true;
    }
    else
    {
        return false;
    }
}

int SqList::find(ElemType e)
{
    for(int i=0;i<length;i++)
    {
        if(elem[i]==e)
        {
            return i+1;
        }
    }
    return 0;
}

bool SqList::insert(int size,ElemType e)
{
    if(size<0||size>length||length>=listsize)
    {
        return false;
    }
    else
    {
        for(int i=length-1;i>=size;i--)
        {
            elem[i+1]=elem[i];
        }
        elem[size]=e;
        length++;
    }
    return true;
}

bool SqList::del(int size)
{
     if(size<0||size>=length)
    {
        return false;
    }
    else
    {
        for(int i=size;i<length;i++)
        {
            elem[i]=elem[i+1];
        }
        length--;
        return true;
    }
}

void SqList::all()
{
    for(int i=0;i<length;i++)
    {
        cout<<elem[i]<<",";
    }
}

void SqList::reverse()
{
    int begin=0,end=length-1;
    ElemType t;
    while(begin<end)
    {
        t=elem[begin];
        elem[begin]=elem[end];
        elem[end]=t;
        begin++;
        end--;
    }
}

void SqList::reverse(int from,int to)
{
    int i,t;
    for(i=0;i<(to-from+1)/2;i++)
    {
        t=elem[from];
        elem[from]=elem[to];
        elem[to]=t;
    }
}


void MergeList(SqList la,SqList lb,SqList &lc)
{
    int i=0,j=0,k=0;
    ElemType a=0,b=0;
    while((i<la.getLength())&&(j<lb.getLength()))
    {
        la.getElem(i+1,a);
        lb.getElem(j+1,b);
        if(a<=b)
        {
            lc.insert(k++,a);
            i++;
        }
        else
        {
            lc.insert(k++,b);
            j++;
        }
    }
    while(i<la.getLength())
    {
        la.getElem(++i,a);
        lc.insert(k++,a);
    }
    while(j<lb.getLength())
    {
        lb.getElem(++j,b);
        lc.insert(k++,b);
    }
}

int MainElem(int a[],int n)
{
    int i,count=0;
    int c=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]==c)
        {
            count++;
        }
        else
        {
            if(count>0)
            {
                count--;
            }
            else
            {
                c=a[i];
                count=1;
            }
        }
    }
    if(count>0)
    {
        for(i=count=0;i<n;i++)
        {
            if(a[i]==c)
            {
                count++;
            }
        }
    }
    if(count>n/2) return c;
    else return -1;
}

int main()
{

    SqList list(5);
    list.insert(0,1);
    list.insert(1,2);
    list.insert(2,3);
    list.insert(3,5);
    list.insert(4,9);
    list.all();
    cout<<endl;

    SqList listb(4);
    listb.insert(0,2);
    listb.insert(1,3);
    listb.insert(2,4);
    listb.insert(3,6);
    listb.all();
    cout<<endl;

    int a[]={0,5,5,3,5,6,5,5};
    int t=MainElem(a,8);
    cout<<t;
    //SqList lc(9);
    //MergeList(list,listb,lc);
    //lc.all();
    //cout<<endl;
    //list.del(4);
    //list.all();
    //cout<<endl;
    //cout<<list.find(2);
    //list.reverse();
    //list.all();

    return 0;
}
