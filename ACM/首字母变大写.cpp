#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[105];
    while(gets(s))   //���cin>>��������  ÿ�����ʻỻ��
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
