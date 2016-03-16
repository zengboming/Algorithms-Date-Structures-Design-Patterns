#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[105];
    while(gets(s))
    {
        int i,len=strlen(s);
        char max='a';
        for(i=0;i<len;i++)
        {
            if(s[i]>max) max=s[i];
        }
        for(i=0;i<len;i++)
        {
            if(s[i]==max) cout<<s[i]<<"(max)";
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
