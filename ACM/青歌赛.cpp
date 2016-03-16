#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[105];
    while(cin>>n)
    {
        int i=1,min,max,s=0;
        cin>>a[1];max=min=a[1];
        for(i=2;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        for(i=1;i<=n;i++)
        {
            s+=a[i];
        }
        double ave=(double)(s-max-min)/(n-2);
        printf("%.2lf\n",ave);
    }
    return 0;
}
