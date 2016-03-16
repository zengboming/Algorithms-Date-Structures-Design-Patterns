#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    int a[1005],aMax[1005];
    while(cin>>n&&n!=0)
    {
        for(i=1;i<=n;i++)
        cin>>a[i];
        for(i=2;i<=n;i++)
        {
            int nTmp=0;
            aMax[1]=a[1];
            for(j=1;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    if(nTmp<aMax[j])
                        nTmp=aMax[j];
                }

            }
            aMax[i]=nTmp+a[i];
        }
        int nMax=-1;
        for(i=1;i<=n;i++)
            if(nMax<aMax[i])
                nMax=aMax[i];
        cout<<nMax<<endl;
    }
    return 0;
}
