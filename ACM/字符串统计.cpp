#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[1010];
    getchar();           //没有这句的话，输入2的时候就会输出一个0，为什么？
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
