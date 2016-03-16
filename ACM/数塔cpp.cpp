#include<stdio.h>
int max(int x,int y)
{ return x=x>y?x:y; }
int main()
{
    int sum,i,j,a[101][101],c,n;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            scanf("%d",&a[i][j]);
        }
        for(i=n-1;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                a[i-1][j]=max(a[i][j]+a[i-1][j],a[i][j+1]+a[i-1][j]);
            }
        }
        printf("%d\n",a[0][0]);
    }
    return 0;
}
