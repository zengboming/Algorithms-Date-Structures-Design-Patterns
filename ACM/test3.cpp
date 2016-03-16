#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[51]={0,3,6,6};
    while(cin>>n){
        for(int i=4;i<=n;i++){
            a[i]=a[i-1]+2*a[i-2];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
