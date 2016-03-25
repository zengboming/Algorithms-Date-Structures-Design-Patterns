/*
用stack模拟queue,实现入队，出队，是否为空操作
*/

#include<iostream>
#include<stack>
using namespace std;

int pop_data[100];

class queue
{
private:
    int count;
    stack<int> s;
public:
    queue();
    void push(int data);
    void pop();
    int empty();
};

queue::queue():count(0)
{

}

void queue::push(int data)
{
    if(s.empty())
    {
        s.push(data);
    }
    else
    {
       for(int i=0;i<count;i++)
       {
           pop_data[i]=s.top();
           s.pop();
       }
       s.push(data);
       for(int i=count-1;i>=0;i--)
       {
           s.push(pop_data[i]);
       }
    }
    count++;
}

void queue::pop()
{
    cout<<s.top()<<endl;
    s.pop();
    count--;
}

int queue::empty()
{
    if(count==0){return 0;}
    else{return 1;}
}

int main()
{
    pop_data[100]=0;
    queue q=queue();
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty();
    return 0;
}
