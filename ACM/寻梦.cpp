#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char a[55],b[55];
        cin>>a>>b;
        int len=strlen(a);
        int i;
        for(i=0;i<=len/2-1;i++)
            cout<<a[i];
        cout<<b;
        for(i=len/2;i<len;i++)
            cout<<a[i];
        cout<<endl;

    }
    return 0;
}
