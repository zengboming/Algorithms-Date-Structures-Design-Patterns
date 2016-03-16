#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[41]={0,3,8};
    while(cin>>n){
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]*2+a[i-2]*2;
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
