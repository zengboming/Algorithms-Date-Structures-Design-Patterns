#include<iostream>
using namespace std;

int Max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int n,t,i,j,x;
    int a[100005]={-1005};
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            int max=-1005;
            for(j=1;j<=n;j++)
            {
                cin>>a[j];
                a[j]+=Max(a[j-1],0);
                if(a[j]>max)
                {
                    max=a[j];
                    x=j-1;
                }
            }
            cout<<"Case "<<i<<":"<<endl;
            cout<<max<<" "<<x<<endl;
        }

    }
    return 0;
}
