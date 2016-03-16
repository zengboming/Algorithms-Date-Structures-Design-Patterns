#include<iostream>
using namespace std;
int main()
{
    __int64 i;
    for(i=1;i<=200;i++)
    {
        __int64 sum=0,t=1,n;
        n=i;
        while(n)
        {
            int j;
            for(j=1;j<=n%10;j++)
            {
                t*=j;
            }
            sum+=t;
            n/=10;
        }
        if(i==sum) cout<<i<<endl;
    }
    return 0;
}


/*#include<iostream>
using namespace std;
__int64 shu(__int64 n)
{
    __int64 i,s=1;
    for(i=1;i<=n;i++)
       s*=i;
    return s;
}
int main()
{
    __int64 i,j,n,m,t,f;
    for(i=1;i<=2147483647;i++)
    {
        t=i;f=0;
        while(t)
        {
            n=t%10;
            m=t/10;
            t=m;
            f+=shu(n);
        }
        if(f==i)printf("%I64d\n",i);
    }
    return 0;
}
*/
