#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i;
    double a[12],sum=0;
    for(i=0;i<12;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    printf("$%.2lf\n",sum/=12);
    return 0;
}
