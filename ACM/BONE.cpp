#include <stdio.h>

char s[8][8];

int flag[10][10];

typedef struct

{

    int x;

    int y;

}pos;

int walk(int x,int y,int ex,int ey,int t)

{

 int a=(x+y)%2,b=(ex+ey)%2,c=t%2;

 if((a==b && c) || (a!=b && c==0))return 0;/*奇偶剪枝*/

    if (t==0)

 {

        if (x==ex && y==ey)return 1;

        else return 0;

 }

    int k=0;

    flag[x][y]=1;

    if (k==0 && flag[x][y+1]==0)k=walk(x,y+1,ex,ey,t-1);

    if (k==0 && flag[x+1][y]==0)k=walk(x+1,y,ex,ey,t-1);

    if (k==0 && flag[x][y-1]==0)k=walk(x,y-1,ex,ey,t-1);

    if (k==0 && flag[x-1][y]==0)k=walk(x-1,y,ex,ey,t-1);

    flag[x][y]=0;

    return k;

}

void sol(int n,int m,int t)

{

    int i,j,sx=1,sy=1,ex=1,ey=1,count=0;

    for (i=1;i<=n;i++)/*转换地图成为标记信息，找到起终点坐标*/

    {

        /*构成闭合形状，防止越界，0，n+1行0,m+1列为1*/

        flag[i][0]=1;flag[i][m+1]=1;

        for (j=1;j<=m;j++)

        {

            flag[0][j]=1;flag[n+1][j]=1;

            if (s[i-1][j-1]=='X')flag[i][j]=1;

            else {flag[i][j]=0;count++;}

            if (s[i-1][j-1]=='S'){sx=i;sy=j;}

            if (s[i-1][j-1]=='D'){ex=i;ey=j;}

        }

    }

    if (count>=t && walk(sx,sy,ex,ey,t))printf("YES\n");

    else printf("NO\n");

}

int main(void)

{

    int i,n,m,t;;

    while (scanf("%d%d%d",&n,&m,&t)!=EOF && (n || m ||t))

    {

        for (i=0;i<n;i++)scanf("%s",s[i]);/*输入地图信息*/

        sol(n,m,t);

    }

    return 0;

}
