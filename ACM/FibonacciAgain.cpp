#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0||n==1) cout<<"no"<<endl;
        else if(n%4==2) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
