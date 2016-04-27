#include<iostream>
using namespace std;

class A
{
    public: void output()
    {
        cout<<"A"<<endl;
    }
};

class B
{
    public: void output()
    {
        cout<<"B"<<endl;
    }
};



int main()
{
    A a;
    B *b;
    b=&(A&)a;
    b->output();
    return 0;
}
