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
            if(j%m==0)//����ط������ص�j����� ���j����m�����һ��ƽ����
            {
                //����ط��Ŀո���� ������ �����һ������ ֮��ÿ���������� һ���ո�һ������" %d�������ͱ����ж����һ����������л��ǿո���
                printf(t==0?"%d":" %d",sum/m);//��Ŀ����� ��� t==0 Ϊ�� ��ִ��ð��ǰ���������ִ��ð�ź������䣬Ҳ������if����
                t=1;
                sum=0;
                j=0;
            }
        }
        if(j!=0)//����ϸ�forѭ��֮�� jû������˵����ʣ���������m��������ֱ�Ӵ��Ǹ�����ʼһֱ�������һ��ƽ������������ͺ��ˡ�
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
