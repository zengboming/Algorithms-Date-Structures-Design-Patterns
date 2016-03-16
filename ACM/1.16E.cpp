#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    int a[1005],amax[1005];
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
            cin>>a[i];
        amax[1]=1;
        for(i=1;i<=n;i++)
        {
            int ntmp=0;
            for(j=1;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    if(amax[j]>ntmp)
                    ntmp=amax[j];
                }
            }
            amax[i]=ntmp+1;
        }
        int nmax=0;
        for(i=1;i<=n;i++)
        {
            if(amax[i]>nmax)
            nmax=amax[i];
        }
        cout<<nmax<<endl;
    }
    return 0;
}
