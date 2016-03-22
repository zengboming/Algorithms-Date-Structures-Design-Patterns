#include<iostream>
using namespace std;

int func(int num)
{
    int a1=1,a2=1,a3=2;
    for(int i=0;i<num-2;i++)
    {
        a3=a2+a1;
        a1=a2;
        a2=a3;
    }
    return a3;
}

int main()
{
    cout<<func(7);

    return 0;
}
