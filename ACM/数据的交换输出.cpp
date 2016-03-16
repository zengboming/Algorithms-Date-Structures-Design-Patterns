#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int a[105],i,min,j=1,t;
        cin>>a[1];
        min=a[1];
        for(i=2;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
            {
                min=a[i];
                j=i;
            }
        }
        t=min;
        a[j]=a[1];
        a[1]=t;
        for(i=1;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
