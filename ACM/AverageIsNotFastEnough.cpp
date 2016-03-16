#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,num;
    double d;
    cin>>n>>d;
    while(cin>>num)
    {
        printf("%3d: ",num);
        int flag=1,t=0;
        for(int i=0;i<n;i++)
        {
            char a[10];
            cin>>a;
            if(a[0]=='-') flag=0;
            else t+=((a[0]-'0')*3600+((a[2]-'0')*10+a[3]-'0')*60+(a[5]-'0')*10+a[6]-'0');
        }
        if(flag==0) cout<<"-"<<endl;
        else
        {
            int ave=1.0*t/d+0.5;
            int min=ave/60;
            int sec=ave%60;
            printf("%d:%02d min/km\n",min,sec);
        }

    }
    return 0;
}
