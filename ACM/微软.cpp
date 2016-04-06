#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int N,P,W,H;
        cin>>N>>P>>W>>H;
        int a[1000]={0};
        int count=0;
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
            count+=a[i];
        }

        int j=0;
        for(int i=1;i<1000;i++)
        {
            if((H/i)*(W/i)>=ceil((count*1.0)/(P*1.0)))
            {
                j++;
            }
        }
        if(n!=0)
        {
            cout<<j<<endl;
        }
        else
        {
            cout<<j;
        }
    }
    return 0;
}

/*
2
1 10 4 3
10
2 10 4 3
10 10
*/
