#include<iostream>
#include<cmath>
using namespace std;

int ss(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

int main()
{
    int x,y;
    while(cin>>x>>y&&(x!=0||y!=0))
    {
        int flag=1;
        for(int i=x;i<=y;i++)
        {
            int a=i*i+i+41;
            if(a<=1) flag=-1;
            else if(a==2) flag=1;
            else if(ss(a)==0) flag=-1;
        }
        if(flag==1) cout<<"OK"<<endl;
        else cout<<"Sorry"<<endl;
    }
    return 0;
}
