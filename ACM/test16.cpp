#include <stdio.h>
#include<string.h>
int flag=1;
int map[110][110];
void  topology(int n)
{
int mark[510];
memset(mark,0,sizeof(mark));
int i,j,k;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(map[i][j]==1)
mark[j]++;
}
for(i=0;i<n;i++)
{
j=0;
while(mark[j]!=0) j++;
if(j>=n)
{
flag=0;
break;
}
mark[j]=-1;
for(k=0;k<n;k++)
if(map[j][k]==1)
mark[k]--;
}
if(flag==1)
printf("YES\n");
else printf("NO\n");
}
int main()
{

int n,i,m;
int start,end;
while(scanf("%d%d",&n,&m)!=EOF)
{
if(n==0&&m==0) break;
memset(map,0,sizeof(map));
flag=1;
for(i=0;i<m;i++)
{
scanf("%d%d",&start,&end);
map[start][end]=1;
}
       topology(n);

}
 return 0;
}
