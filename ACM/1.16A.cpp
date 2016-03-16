//s=n-maxlen
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char s1[5005],s2[5005];
    int a[2][5005]={0,0};
    int n,i,j;
    while(cin>>n)
    {
        scanf("%s",s1+1);
        for(i=1;i<=n;i++)
            s2[i]=s1[n-i+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(s1[i]==s2[j])
                    a[i%2][j]=a[(i-1)%2][j-1]+1;   //¹ö¶¯Êý×é
                else a[i%2][j]=max(a[(i-1)%2][j],a[i%2][j-1]);
            }
        }
        cout<<n-a[n%2][n]<<endl;
    }
    return 0;
}
