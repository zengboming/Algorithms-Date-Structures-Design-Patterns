#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int n,flag=1;
        double sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            sum=sum+flag*(1.0/i);
            flag=flag*(-1);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
