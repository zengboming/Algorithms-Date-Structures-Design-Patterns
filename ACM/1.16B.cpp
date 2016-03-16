#include<iostream>
#include<cstdio>
#include<CString>
using namespace std;

int main()
{
    char s1[500],s2[500];
    int m[500][500]={0};
    while(scanf("%s%s",s1+1,s2+1)>0)
    {
        int i,j;
        int len1=strlen(s1+1);
        int len2=strlen(s2+1);
        for(i=1;i<=len1;i++)
        {
            for(j=1;j<=len2;j++)
            {
                if(s1[i]==s2[j])
                    m[i][j]=m[i-1][j-1]+1;
                else
                {
                    m[i][j]=max(m[i-1][j],m[i][j-1]);
                }
            }
        }
        cout<<m[len1][len2]<<endl;
    }
    return 0;
}
