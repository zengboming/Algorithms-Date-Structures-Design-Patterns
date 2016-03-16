#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--)
    {
        int y,n;
        cin>>y>>n;
        while(y%4 || (y%100==0 && y%400))y++;
        n--;
        y=y+n/97*400;
        n=n%97;
        while(n)
        {
            y=y+4;
            if(y%400==0||(y%4==0 && y%100!=0))
                n--;
        }
        cout<<y<<endl;
    }
    return 0;
}
