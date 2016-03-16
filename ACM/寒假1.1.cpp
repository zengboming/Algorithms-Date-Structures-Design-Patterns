#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    __int64 f[100000005]={0,1,1};
    while ((cin>>a)&&(cin>>b)&&(cin>>n)&&(a!=0)&&(b!=0)&&(n!=0))
    {
        int i,j;
        for(i=3;i<=n;i++)
            f[i]=(a*f[i-1]+b*f[i-2])%7;
        cout<<f[n]<<endl;
    }
    return 0;
}
