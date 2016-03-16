#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[1001]={0,2},b[1001]={0,2};
    while(cin>>n){
        for(int i=2;i<=n;i++){
            a[i]=a[i-1]+i;
            b[i]=b[i-1]+a[i-1];
        }
        cout<<b[n]<<endl;
    }
    return 0;
}
