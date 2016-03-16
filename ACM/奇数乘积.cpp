#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a,s=1;
        while(n--)
        {
            cin>>a;
            if(a%2==1) s*=a;
        }
        cout<<s<<endl;
    }
    return 0;
}
