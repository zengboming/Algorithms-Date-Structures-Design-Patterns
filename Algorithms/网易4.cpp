#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char y[10] = "ntse";
    char *x = y;
    *x=x[2];
    //n = strlen(x);
    //*x = x[n];
    x++;
    //printf("x=%s\n",x);
    //printf("y=%s\n",y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}
