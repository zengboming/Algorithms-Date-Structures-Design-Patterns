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
    if(i>=0&&i<listsize)
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
    if(size<0||size>length||length==listsize)
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
        cout<<elem[i];
    }
}

int main()
{
    SqList list(5);
    list.insert(0,2);
    list.insert(1,3);
    list.insert(2,0);
    list.insert(2,4);
    list.insert(4,5);
    list.all();
    cout<<endl;
    list.del(4);
    list.all();
    cout<<endl;
    cout<<list.find(2);

    return 0;
}
