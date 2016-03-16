#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int i,a,b;
        char c;
        for(i=1;i<=t;i++)
        {
            cin>>c>>a>>b;
            if(c=='+') cout<<a+b<<endl;
            else if(c=='-') cout<<a-b<<endl;
            else if(c=='*') cout<<a*b<<endl;
            else if(c=='/')
            {
                if(a%b==0) cout<<a/b<<endl;
                else printf("%.2lf\n",double(a)/b);
            }
        }
    }
    return 0;
}
