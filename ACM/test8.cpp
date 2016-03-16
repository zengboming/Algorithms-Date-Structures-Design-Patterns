#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[30]={0};
    while(cin>>n){
        for(int i=n;i>0;i--){
            a[n]=1;
            a[i-1]=2*(a[i]+1);
        }
        cout<<a[1]<<endl;
    }
    return 0;
}
