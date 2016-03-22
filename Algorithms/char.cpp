#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    const char* p="hello";
    int cnt=0;
    //while(*p){cnt++;p++;cout<<cnt;}
    //cnt=0;
    while(p){
        cnt++;
        p++;
        cout<<p;
        system("pause");
        }
    return 0;
}
