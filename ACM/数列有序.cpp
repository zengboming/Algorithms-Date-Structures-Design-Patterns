#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m&&(n!=0||m!=0))
    {
        int i,a[105],t=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>m) t=i;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>m)
            {
                t=i;
                break;
            }
        }
        if(t==0)
        {
            cout<<m;
            for(i=0;i<n;i++)
                cout<<" "<<a[i];
            cout<<endl;
        }
        else if(t==n)
        {
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<m<<endl;
        }
        else
        {
            for(i=0;i<t;i++)
                cout<<a[i]<<" ";
            cout<<m;
            for(i=t;i<n;i++)
                cout<<" "<<a[i];
            cout<<endl;
        }

    }
    return 0;
}
