#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[11][11]={0};
        int i,k=1;
        for(i=1;i<=n;i++,k++)
            a[1][i]=k;
        for(i=2;i<=n;i++,k++)
            a[i][n]=k;
        for(i=n-1;i>=1;i--,k++)
            a[n][i]=k;
        for(i=n-1;i>1;i--,k++)
            a[i][1]=k;
        for(i=1;i<=n;i++)
        {
            for(k=1;k<=n;k++)
            {
                if(a[i][k]==0) cout<<"   ";
                else printf("%3d",a[i][k]);
            }
            cout<<endl;
        }
    }
    return 0;
}
