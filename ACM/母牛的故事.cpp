#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n)
    {
        int s=1;
        int a[60]={1,1,2};
        for(int i=3;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-3];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
