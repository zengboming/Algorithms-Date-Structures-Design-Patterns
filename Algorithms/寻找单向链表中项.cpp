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


int main()
{


    return 0;
}
