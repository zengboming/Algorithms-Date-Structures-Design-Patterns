#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,s=1;
        for(i=1;i<n;i++)
        {
            s=(s+1)*2;
        }
        cout<<s<<endl;
    }
    return 0;
}
