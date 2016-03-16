#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int a,i=0;
        int b[10];
        for(a=m;a<=n;a++)
        {
            if(a==((a%10)*(a%10)*(a%10)+(a/10%10)*(a/10%10)*(a/10%10)+(a/100)*(a/100)*(a/100)))
            {
                b[i]=a;
                if(i==0) cout<<b[i];
                else cout<<" "<<b[i];
                i++;
            }
        }
        if(i==0) cout<<"no"<<endl;
        else cout<<endl;
    }
    return 0;
}
