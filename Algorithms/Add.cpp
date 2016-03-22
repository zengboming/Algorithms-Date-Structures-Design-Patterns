#include<iostream>
using namespace std;

int add(int a,int b)
{
    int sum=a^b;
    int carry=a&b;
    while(carry!=0)
    {
        a=sum;
        b=carry<<1;
        sum=a^b;
        carry=a&b;
    }
    return sum;
}

int main()
{
    cout<<add(5,32);
    return 0;
}
