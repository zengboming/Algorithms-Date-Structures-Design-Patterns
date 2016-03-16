#include<iostream>
using namespace std;
int main()
{
    int m,k;
    while(cin>>m>>k&&m!=0&&k!=0)
    {
        int i;
        for(i=2;i<2000;i++)
        {
            if(m-i+i/k==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
