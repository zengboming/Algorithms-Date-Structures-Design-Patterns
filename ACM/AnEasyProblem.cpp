#include<iostream>
using namespace std;
int main()
{
    int c;
    cin>>c;
    int a[10][10];
    while(c--)
    {
        int n,i,j;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            int t=0;
            for(j=1;j<=n;j++)
            {
                a[i][j]=i*j;
                if(t==0)
                {
                    cout<<a[i][j];
                    t=1;
                }
                else cout<<" "<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
