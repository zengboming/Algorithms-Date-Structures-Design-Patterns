#include<iostream>
using namespace std;
int gcd(int m,int n)
{
if(m%n==0) return n;
else gcd(n,m%n);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<a/gcd(a,b)*b<<endl;
    }
    return 0;
}
