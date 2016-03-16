#include<iostream>
using namespace std;
int main()
{
    char a;
    int n;
    int t=0;
    while(cin>>a&&a!='@')
    {
        if (t)
        {
            cout<<endl;
        }
        else
        {
            t = 1;
        }
        cin>>n;
        char tri[100][100]={0};
         int i,j=n;
         for(i=1;i<n;i++)
         {
             tri[i][j]=a;
             tri[i][n+i-1]=a;
             j--;
         }
        for(i=1;i<=2*n-1;i++)
        tri[n][i]=a;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n+i-1;j++)
            {
                if(tri[i][j]==0) cout<<" ";
                else cout<<a;
            }
            cout<<endl;
        }
    }
    return 0;
}
