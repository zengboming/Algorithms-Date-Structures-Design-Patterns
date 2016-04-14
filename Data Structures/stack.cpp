#include<iostream>
#define ElemType int
using namespace std;
//π≤œÌ’ª
typedef struct stack
{
    ElemType data[20];
    int top[2];
}stack;

void InitStack(stack &s)
{
    s.top[0]=-1;
    s.top[1]=19;
}

bool StackEmpty(stack s)
{
    if(s.top[0]==-1&&s.top[1]==19)
    {
        return true;
    }
    else{return false;}
}

bool  push(int i,int x,stack &s)
{
    if(i<0||i>1)
    {
        cout<<"wrong"<<endl;
        return false;
    }
    else if(s.top[1]-s.top[0]==1)
    {
        cout<<"full"<<endl;
        return false;
    }
    else
    {
        if(i==0)
        {s.data[++s.top[0]]=x;}
        if(i==1)
        {s.data[--s.top[1]]=x;}
        return true;
    }
}

ElemType pop(int i,stack &s)
{
    if(i<0||i>1)
    {
        cout<<"wrong"<<endl;
        return -1;
    }
    else
    {
        if(i==0)
        {
            if(s.top[0]==-1){return -1;}
            else{return s.data[s.top[0]--];}
        }
        if(i==1)
        {
            if(s.top[1]==19){return -1;}
            else{return s.data[s.top[1]++];}
        }

    }
}

int main()
{
    stack s;
    InitStack(s);
    push(1,5,s);
    push(0,4,s);
    cout<<pop(0,s)<<endl;
    cout<<pop(1,s)<<endl;
    return 0;
}
