#include<iostream>
using namespace std;

class A
{
public:
    virtual void fun1()
    {
        cout<<"A:func1"<<endl;
        fun2();
    }
    void fun2()
    {
        cout<<"A:fun2"<<endl;
    }
};

class B:public A
{
public:
    void fun1()
    {
        cout<<"B:func1"<<endl;
        fun2();
    }
    void fun2()
    {
        cout<<"B:func2"<<endl;
    }
};

class C:public B
{
public:
    virtual void fun2()
    {
        cout<<"C:func2"<<endl;
    }
};

int main()
{

    C c;
    A *pa=&c;
    pa->fun1();
    //B b;
    //A *a=&b;
    //a->fun2();


    return 0;
}
