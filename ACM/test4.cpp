#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[51]={0,1,2};
    while(cin>>n){
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
