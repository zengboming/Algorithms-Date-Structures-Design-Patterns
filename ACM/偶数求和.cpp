#include <stdio.h>
int main( )
{
    int i, n, m, b, c;
    while (scanf("%d%d", &n, &m) != EOF)
    {
       b = 2;
       c = 0;
       for (i = 0 ; i < n / m ; i++)
          {
             printf(c++ ? " %d" : "%d", b + m - 1);
             b += m * 2;
          }
        printf(n % m ? " %d\n" : "\n", b + n % m - 1);
     }
     return 0;
 }

#include<stdio.h>
int main()
{
    int i,n,j,m,t,sum;
    int a[105];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        sum=0;
        t=0;
        j=0;
        for(i=0; i<n; i++)
        {
            a[i]=i*2+2;
            sum=sum+a[i];
            j++;
            if(j%m==0)//这个地方就是重点j做标记 如果j够了m个输出一次平均数
            {
                //这个地方的空格输出 我是用 先输出一个数字 之后每次输出则输出 一个空格一个数字" %d“这样就避免判断最后一个是输出换行还是空格了
                printf(t==0?"%d":" %d",sum/m);//三目运算符 如果 t==0 为真 则执行冒号前面的语句否则执行冒号后面的语句，也可以用if代替
                t=1;
                sum=0;
                j=0;
            }
        }
        if(j!=0)//如果上个for循环之后 j没有清零说明，剩余的数不足m个。这样直接从那个数开始一直到最后做一个平局数并且输出就好了。
        {
            sum=0;
            for(i=n-j+1; i<=n; i++)
                sum+=a[i];
            printf(" %d\n",sum/j);
        }
        else
            printf("\n");
    }
    return 0;
}
