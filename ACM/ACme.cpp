#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char buf[100005];
    while(gets(buf))
    {
        int a[26]={0};
        int len=strlen(buf);
        int i=0;
        for(i=0;i<len;i++)
        {
            int c=buf[i]-'a';
            if(c>=0&&c<26) a[c]++;
        }
        for(i=0;i<26;i++)
            cout<<char('a'+i)<<":"<<a[i]<<endl;
            cout<<endl;
    }
    return 0;
}
