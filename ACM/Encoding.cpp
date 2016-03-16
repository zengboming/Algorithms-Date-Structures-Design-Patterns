#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char s[10005];
        int a[26]={0};
        scanf("%s",&s);
            int i,len=strlen(s);
            for(i=0;i<len;i++)
            {
                int b=s[i]-'A';
                if(s[i]==s[i+1]) a[b]++;
                else
                {
                    if(a[b]!=0) cout<<a[b]+1<<s[i];
                    else cout<<s[i];
                }
            }
            cout<<endl;
    }
    return 0;
}
