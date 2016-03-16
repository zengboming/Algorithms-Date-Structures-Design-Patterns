#include<iostream>
using namespace std;
int main(){
    int n,c;
    long long a[10001]={0,2};
    cin>>c;
    while(c--){
        cin>>n;
        for(int i=2;i<=n;i++){
            a[i]=a[i-1]+(i-1)*4+1;
        }
        cout<<a[n]<<endl;
    }

    return 0;
}
