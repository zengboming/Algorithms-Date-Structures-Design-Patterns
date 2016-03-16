#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i,j,T,a[100005],sum,term,begin,end,temp;

    scanf("%d",&T);
    for (i=1;i<=T;++i)
    {
        scanf("%d",&a[0]);

        sum = -1002;
        term = -1001;
        begin=end=0;
        temp = 1;
        for (j=1;j<=a[0];++j)
        {
            scanf("%d",&a[j]);
            if(term>=0)
                term += a[j];
            else
            {
                term = a[j];
                temp = j;
            }
            if(term>sum)
            {
                sum = term;
                begin = temp;
                end = j;
            }
        }
        printf("Case %d:\n%d %d %d\n",i,sum,begin,end);
        if(i<T)
            printf("\n");
    }
    return 0;
}
