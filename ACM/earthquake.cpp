#include<cstdio>
#include<cstring>
using namespace std;
int pre[1005],dis[1005][2];
bool flag[1005];//是否已修复的标记
int Find(int x)//查找
{
    if(pre[x]==x) return x;
    return pre[x]=Find(pre[x]);
}
void Union(int a,int b)//合并
{
    pre[b]=a;
}
int main()
{
    int n,d,a,b,fai,faa;
    char s[10];
    scanf("%d%d",&n,&d);
    memset(flag,false,sizeof(flag));
    for(int i=1;i<=n;++i)
    {
        scanf("%d%d",&dis[i][0],&dis[i][1]);
        pre[i]=i;
    }
    for(;scanf("%s",s)!=EOF;)
    {
        if(s[0]=='O')
        {
            scanf("%d",&a);
            if(flag[a]) continue;
            flag[a]=true;
            for(int i=1;i<=n;++i)
            {
                fai=Find(i);faa=Find(a);
                if(flag[i]&&((dis[i][0]-dis[a][0])*(dis[i][0]-dis[a][0])+(dis[i][1]-dis[a][1])*(dis[i][1]-dis[a][1]))<=d*d)//判断电脑之间的距离和是否已经被修复
                {
                    if(fai!=faa)  Union(fai,faa);
                }
            }
        }
        else
        {
            scanf("%d%d",&a,&b);
            if(Find(a)==Find(b))
               printf("SUCCESS\n");
            else
               printf("FAIL\n");
        }
    }
    return 0;
}
