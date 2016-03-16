#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int pre[100010];
int rank[100010];
int edge=0,node=0;
int find(int i)
{
    int t=i;
    for(;pre[i]!=-1;i=pre[i]);
    return i;
}
int Union(int i,int j)
{
    i=find(i);
    j=find(j);
    if(i==j)
        return 0;
    else
    {
        edge++;
		pre[j]=i;
		rank[i]+=rank[j];
		node=rank[i];
        return 1;
    }
}
int main()
{
    int n,m,i,tree=1;
    memset(pre,-1,sizeof(pre));
    for(i=0;i<100010;i++)    pre[i]=-1, rank[i]=1;
    while(scanf("%d%d",&m,&n)&&m!=-1)
    {
        if(m+n==0)
        {
            if(tree)
            {
                if(edge==node-1||(edge+node==0))
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            for(i=0;i<100010;i++)    pre[i]=-1, rank[i]=1;
            tree=1;edge=0;node=0;
        }
        else if(tree)
        {
            tree=Union(m,n);
            if(!tree)
                printf("No\n");
        }
    }
}

