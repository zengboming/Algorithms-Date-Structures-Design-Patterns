#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[105];
    while(gets(s))   //如果cin>>就有问题  每个单词会换行
    {
        int i,len=strlen(s);
        s[0]-=32;
        for(i=1;i<len;i++)
        {
            if(s[i]==' ') s[i+1]-=32;
        }
        printf("%s\n",s);
    }
    return 0;
}
