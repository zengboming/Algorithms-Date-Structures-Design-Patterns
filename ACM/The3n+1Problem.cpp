#include<iostream>
using namespace std;

int sum(int i)
{
    int s=1;
    while(i>1)
        {
            if(i%2==1) i=3*i+1;
            else i=i/2;
            s++;
        }
        return  s;
}
int main()
{
    int i,j;
    while(cin>>i>>j)
    {
        cout<<i<<" "<<j<<" ";
        int a,b,m;
        if(i>j)
        {
            a=j;
            b=i;
        }
        else
        {
            a=i;
            b=j;
        }
        m=sum(a);
        for(i=a+1;i<=b;i++)
            m=max(sum(i),m);
        cout<<m<<endl;
    }
    return 0;
}
