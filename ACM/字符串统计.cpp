#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[1010];
    getchar();           //û�����Ļ�������2��ʱ��ͻ����һ��0��Ϊʲô��
    while(n--)
    {
        int sum=0;
        gets(s);
        for(int i=0;i<strlen(s);i++)
            if(s[i]>='0'&&s[i]<='9')
                sum++;
        cout<<sum<<endl;
    }
    return 0;
}
