#include<iostream>
#include<cstdio>
#include <memory.h>
using namespace std;
#define MAX 505
int map[MAX][MAX];
int p[MAX];int toposort(int n,int mat[][MAX],int* ret)
{
    int d[MAX],i,j,k;
    for (i=0;i<n;i++)
        for (d[i]=j=0;j<n;d[i]+=mat[j++][i]);
    for (k=0;k<n;ret[k++]=i)
    {
        for (i=0;d[i]&&i<n;i++);
        if (i==n)
            return 0;
        for (d[i]=-1,j=0;j<n;j++)
            d[j]-=mat[i][j];
    }
    return 1;
}int main()
{
    int n,m,a,b;
    int i;
    while(cin>>n>>m)
    {
        memset(map,0,sizeof(map));
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            map[a-1][b-1]=1;
        }       toposort(n,map,p);       for(i=0;i<n;i++)
           printf(i==0?"%d":" %d",p[i]+1);        printf("\n");
    }
    return 0;
}
