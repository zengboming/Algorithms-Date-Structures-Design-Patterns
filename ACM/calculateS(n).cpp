#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    __int64 n;
    while(cin>>n)
    {
        printf("%04d\n",(n%10000*(n+1)%10000/2)%10000*(n%10000*(n+1)%10000/2)%10000);
    }
    return 0;
}
