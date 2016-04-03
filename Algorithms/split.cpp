#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char buff[]="101,w,1993-2-2 12:23:34,300";
    const char * split=",";
    char *p;
    p=strtok(buff,split);
    cout<<p<<endl;

    p=strtok(NULL,split);
    cout<<p<<endl;

    p=strtok(NULL,split);
    cout<<p<<endl;

    p=strtok(NULL,split);
    cout<<p<<endl;

    return 0;
}
