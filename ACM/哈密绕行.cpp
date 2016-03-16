#include <stdio.h>
typedef struct
{
    int dir[3];
}node;
node row[22];
int used[21], count = 0, ans[21], m = 0, k = 0;
void dfs(int x)
{
    int i = 0;
    if(k == 19 && (row[x].dir[0] == m || row[x].dir[1] == m || row[x].dir[2]==m))
    {
        printf("%d:  ",++count);
        printf("%d ",m);
        for(i = 0; i<k; i++)
            printf("%d ",ans[i]);
        printf("%d\n",m);
    }
    else
    {
        for(i = 0; i<3; i++)
        {
            if(!used[row[x].dir[i]])
            {
                ans[k++] = row[x].dir[i];
                used[row[x].dir[i]] = 1;
                dfs(row[x].dir[i]);
                used[row[x].dir[i]] = 0;
                k--;
            }
        }
    }
}
int main()
{
    int i = 0;
    for(i = 1; i<21; i++)
        scanf("%d %d %d",&row[i].dir[0], &row[i].dir[1], &row[i].dir[2]);
    while(scanf("%d",&m)  , m)
    {
        for(i = 1; i<21; i++)
            used[i] = 0;
        k = 0;
        used[m] = 1;
        dfs(m);
    }
    return 0;
}
