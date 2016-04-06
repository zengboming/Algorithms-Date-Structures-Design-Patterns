#include<iostream>
using namespace std;

int min1=100;
char arr[][8] ={
{'.','.','.','.','b','b','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','b','.','.'},
{'.','.','.','b','b','.','.','.'},
};

void trial(int i,int j, int n){
     if(i==3 && j==7){
             cout<<n;
             if(n<min1){
                       n=min1;
             }
             return;
     }
     if(arr[i][j]=='b'){
         ++n;
     }
     if(j+1<8)  trial(i,j+1,n);
     if(i+1<4)  trial(i+1,j,n);
     if(arr[i][j]!='b'){
         --n;
     }
}

int main()
{
    trial(0,0,0);
    cout<<min1;
    return 0;
}
