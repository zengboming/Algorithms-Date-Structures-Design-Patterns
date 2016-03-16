/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[25],b[4]={"end"};
    while(cin>>a&&strcmp(a,b)!=0)
    {
        int i,n=strlen(a);
        bool flag=1,flag1=1;
        char t1=0,t2=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
                if(flag1==0)
                {
                    t2=0;
                    flag1=1;
                    t1++;
                }
                else t1++;
                if(t1>=3)
                {
                    flag=0;
                    break;
                }
            }
            else
            {
                if(flag1==1)
                {
                    //t1=0;
                    flag1=0;
                    t2++;
                }
                else t2++;
                if(t2>=3)
                {
                    flag=0;
                    break;
                }
            }

            if(t1==0)
            {
                flag=0;
                break;
            }

            if(a[i]==a[i+1])
            {
                if(a[i]!='e'&&a[i]!='o')
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0) cout<<"<"<<a<<"> "<<"is not acceptable."<<endl;
        else cout<<"<"<<a<<"> "<<"is acceptable."<<endl;
    }
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
const int MAXN=200;
char str[MAXN];

bool isvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o') return true;
    else return false;
}
bool judge1(int n)  //至少要有一个元音字母
{
    for(int i=0;i<n;i++)
    {
        if(isvowel(str[i]))
          return true;
    }
    return false;
}
bool judge2(int n)
{
    for(int i=2;i<n;i++)
    {
        if(isvowel(str[i-2])&&isvowel(str[i-1])&&isvowel(str[i])) return false;
        if(!isvowel(str[i-2])&&!isvowel(str[i-1])&&!isvowel(str[i])) return false;
    }
    return true;
}
bool judge3(int n)
{
    for(int i=1;i<n;i++)
    {
        if(str[i]==str[i-1]&&str[i]!='e'&&str[i]!='o') return false;
    }
    return true;
}
int main()
{
    int len;
    while(scanf("%s",&str)!=EOF)
    {
        if(strcmp(str,"end")==0) break;
        len=strlen(str);
        if(judge1(len)==false)
        {
            printf("<%s> is not acceptable.\n",str);
            continue;
        }
        if(judge2(len)==false)
        {
            printf("<%s> is not acceptable.\n",str);
            continue;
        }
        if(judge3(len)==false)
        {
            printf("<%s> is not acceptable.\n",str);
            continue;
        }
        printf("<%s> is acceptable.\n",str);
    }
    return 0;
}
