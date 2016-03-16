#include<stdio.h>
#define maxn 205
#define INF 1000000000
int matrix[maxn][maxn];
int n,m;
void init()
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            matrix[i][j]=i!=j?INF:0;
        }
    }
}
void floyd()
{
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            for(k=0;k<=n;k++)
            {
                if(matrix[j][k]>matrix[j][i]+matrix[i][k])
                {
                    matrix[j][k]=matrix[j][i]+matrix[i][k];
                }
            }
        }
    }
}
int main()
{
    int u,v,c,start,end,i;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        init();
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d",&u,&v,&c);
            if(matrix[u][v]>c||matrix[v][u]>c)
            matrix[u][v]=matrix[v][u]=c;
        }
        scanf("%d%d",&start,&end);
        if(start==end){printf("0\n");continue;}
        floyd();
        if(matrix[start][end]!=INF)
        printf("%d\n",matrix[start][end]);
        else printf("-1\n");
    }
}
