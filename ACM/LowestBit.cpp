#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&(n!=0))
    {
        int i,j,s=1,k=0,a[105];
        while(n)
        {
            a[k++]=n%2;
            n/=2;
        }
        for(i=0;i<k;i++)
            if(a[i]!=0) break;
        for(j=0;j<i;j++)
        {
            s=s*2;
        }
        cout<<s<<endl;
    }
    return 0;
}
