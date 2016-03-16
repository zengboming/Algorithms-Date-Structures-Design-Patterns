#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
    while(t--)
    {
        int m,d,s=0;
        int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        cin>>m>>d;
        if(m==10&&d==21) cout<<"It's today!!"<<endl;
        else if(m>10||(m==10&&d>21)) cout<<"What a pity, it has passed!"<<endl;
        else
        {
            if(m==10) s=21-d;
            else
            {
                for(int i=m;i<10;i++)
                {
                    s+=a[i];
                }
                s=s-d+21;
            }
            cout<<s<<endl;
        }
    }
    }
    return 0;
}
