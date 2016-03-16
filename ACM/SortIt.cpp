#include<iostream>
using namespace std;
int main()
{
    int n,t;
    int a[1005];
    while(cin>>n)
    {
        int i,j,sum=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
            for(j=1;j<=i;j++)
            {
                if(a[j]<a[j-1])
                {
                    t=a[j-1];
                    a[j-1]=a[j];
                    a[j]=t;
                    sum++;
                }
            }
        cout<<sum<<endl;
    }
    return 0;
}
