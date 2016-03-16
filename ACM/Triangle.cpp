#include<iostream>
using namespace std;

int Max(int x,int y)
{
    if(x>y) return x;
    else  return y;
}
int main()
{
    int i,j,n,t,max=0;
    cin>>t;
        while(t--!=0){
        cin>>n;
        int a[105][105]={0};
        for(i=1;i<=n;i++)
            for(j=1;j<=i;j++)
            {
                cin>>a[i][j];
                a[i][j]+=Max(a[i-1][j],a[i-1][j-1]);
            }
        for(j=1;j<=n;j++)
            if(a[n][j]>max) max=a[n][j];
        cout<<max<<endl;
        }
    return 0;
}


