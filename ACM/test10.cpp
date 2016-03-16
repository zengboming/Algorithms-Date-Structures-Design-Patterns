#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[21]={0,0,1};
    while(cin>>n){
        for(int i=3;i<=n;i++){
            a[i]=(i-1)*(a[i-1]+a[i-2]);
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
