#include<iostream>
using namespace std;
int main(){
    int n;
    long long a[55]={0,1,2,3};
    while((cin>>n)&&n!=0){
        for(int i=4;i<=n;i++){
            a[i]=a[i-1]+a[i-3];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
