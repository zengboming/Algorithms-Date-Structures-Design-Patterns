#include<stack>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
char map[9][9],step;
bool escape;
int e_x,e_y,s,t,dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};

void DFS(int x,int y,int step1)
{
    if(x<=0||y<=0||x>s||y>t)     //出界
       return ;
    if( escape == 1 )           //已搜到,退出
        return ;
    int temp=(step-step1)-abs(x-e_x)-abs(y-e_y);  //奇偶性剪枝 && 最优性剪枝
    if(temp<0||temp&1)
        return;
    if(x==e_x && y==e_y)             //搜到终点
    {
        if(step1==step)
            escape=1;
        return ;
    }
    for(int i=0;i<4;i++){
        if( map[x+dir[i][0]][y+dir[i][1]] != 'X' )  //深搜
        {
            map[x+dir[i][0]][y+dir[i][1]]= 'X';
            DFS(x+dir[i][0],y+dir[i][1],step1+1);
            map[x+dir[i][0]][y+dir[i][1]]='.';
        }
    }
    return ;
}
int main(){
    int i,j,s_x,s_y;
    while(~scanf("%d%d%d",&s,&t,&step),s+t+step)
    {
        memset(map,0,sizeof(map));
        for(i=1;i<=s;i++)
        {
            getchar();
            for(j=1;j<=t;j++)
            {
                scanf("%c",&map[i][j]);
                if(map[i][j]=='S')
                {   s_x=i;   s_y=j;   }
                if(map[i][j]=='D')
                {   e_x=i;   e_y=j;   }
            }
        }
        getchar();  //这个字符问题如果最后没有吸收,会判错,不知道杭电是怎样判题的
        escape=0;
        map[s_x][s_y]='X';               //一定要标记,否则会搜回来
        DFS(s_x,s_y,0 );
        if(escape)
                puts("YES");
        else
                puts("NO");
    }
    return 0;
}
