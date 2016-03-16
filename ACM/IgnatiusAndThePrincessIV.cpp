/*#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[32768]={0};
        int i,x,sum,num;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a[x]++;
            sum=(n+1)/2;
            if(a[x]>=sum) num=x;
        }
        cout<<x<<endl;
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
 int n;
 int i,j=0;

 int num,num1;
 while(scanf("%d",&n)!=EOF)
 {
  int a[32768]={0};
num1=(n+1)/2;

  for(i=0;i<n;i++)
  {
   scanf("%d",&j);
   a[j]++;
      if(a[j]>=num1)
    num=j;
  }
  printf("%d\n",num);
 }
 return 0;
}
