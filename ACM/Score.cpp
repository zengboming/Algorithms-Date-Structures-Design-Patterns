#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[1005];
    while(t--)
    {
        int n,k,i,s=0;
        cin>>n>>k;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
            if(a[i]>a[k]) s++;
        cout<<s<<endl;

    }
    return 0;
}
