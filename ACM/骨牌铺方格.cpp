#include<iostream>
using namespace std;
int main()
{
    int n;
    __int64 a[55]={0,1,2};
    while(cin>>n)
    {
        int i;
        for(i=3;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        cout<<a[n]<<endl;
    }
    return 0;
}
