#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        __int64 x,y;
        cin>>x>>y;
        if(x%y==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
