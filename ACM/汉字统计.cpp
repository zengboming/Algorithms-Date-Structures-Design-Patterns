#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[1005];
    getchar();            //为什么没有getchar();就会多输出一个0；
    while(n--)
    {
        int sum=0;
        gets(a);          //为什么不能用cin>>a?;
        int i,len=strlen(a);
        for(i=0;i<len;i++)
            if(a[i]<0) sum++;
        cout<<sum/2<<endl;
    }
    return 0;
}
