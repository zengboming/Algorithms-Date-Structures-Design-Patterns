#include<iostream>
using namespace std;
int main(){
    int i,j,N,x,y,n;
    long long a[50]={0,1,2};
    //long long a[50];
    //a[1]=1;
    //a[2]=2;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>x>>y;
        n=y-x;
        for(j=3;j<=n;j++){
            a[j]=a[j-1]+a[j-2];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
