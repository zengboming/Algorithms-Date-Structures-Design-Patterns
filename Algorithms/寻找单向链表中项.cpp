#include<iostream>
using namespace std;

struct Node
{
    int id;
    Node* next;
};

class List
{
private:
    int count;
    Node *head,*rear;
public:
    List()
    {
        count=0;
        head=NULL;
        rear=NULL;
    }
    Node* add(int data);
    Node* mid();
};
Node* List::add(int data)
{
    Node* p=new Node;
    p->id=data;
    if(count==0)
    {
        head=p;
        rear=p;
        count++;
    }
    else
    {
        rear->next=p;
        rear=p;
        count++;
    }
    rear->next=NULL;
    return head;
}
Node* List::mid()
{
    Node* p=new Node;
    p=head;
    int mid=(count+1)/2;
    for(int i=1;i<mid;i++)
    {
        p=p->next;
    }
    return p;
}

int main()
{
    List list=List();
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    //list.add(5);
    cout<<list.mid()->id<<endl;

    return 0;
}
