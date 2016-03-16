#include<iostream>
#include<Cmath>
using namespace std;
int main()
{
    int n,a[105];
    while(cin>>n&&n)
    {
        int i,j,t;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
            for(j=0;j<i;j++)
            {
                if(fabs(a[j])<fabs(a[i]))
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        cout<<a[0];
        for(i=1;i<n;i++)
            cout<<" "<<a[i];
        cout<<endl;
    }
    return 0;
}
