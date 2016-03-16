#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n)
    {
        int i;
        double s1=1.0,sum=1.0;
        for(i=1;i<n;i++)
        {
            s1+=2.0/(i+1);
            sum+=s1;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
