#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int a[1002]={0},j=0,k=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                a[j]++;
                j++;
               }
            else if(s[i]==')')
                j--;
        }
        int i=0;
        while(a[i]!=0)i++;
        cout<<i<<endl;
    }
    return 0;
}
