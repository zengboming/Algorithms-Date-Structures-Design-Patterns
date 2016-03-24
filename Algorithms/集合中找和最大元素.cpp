/*
��N������������S�У��ҳ����Ԫ��C������C=A+B
(1)��������
(2)Cָ�����һ����,�����ģ�iָ���һ����jָ�����ڶ���
(3)��a[i]+a[j]<c,i++;
(4)��a[i]+a[j]>c,j++;
(5)��i>=j,Cָ��ǰһλ
*/

#include<iostream>
#include<algorithm>
using namespace std;

int max(int s[],int n)
{
    sort(s,s+n);
    int c,a,b,i,j;
    for(int start=2;start<n;start++)
    {
        i=0;
        j=n-2;
        c=s[n-1];
        while(i<j)
        {
            a=s[i];
            b=s[j];
            if(a+b<c)
            {
                i++;
            }
            else if(a+b>c)
            {
                j--;
            }
            else
            {
               // cout<<"a,b="<<a<<","<<b<<endl;
                return c;
            }
        }
        n--;
    }
}

int main()
{
    int s[]={1,3,4,5,8,9,12,15,21};
    int n=9;
    cout<<max(s,n);
    return 0;
}
