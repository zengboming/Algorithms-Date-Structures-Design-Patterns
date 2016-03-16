#include<iostream>
using namespace std;

int a[1005];
int b[1005];
int num;

int getfather(int x)
{
    int i,j,r = x;
	while (a[r] != r)
		r =a[r];
	i = x;
	while (i != r)
	{
		j =a[i];
		a[i] = r;
		i = j;
	}
	return r;
}
void connect(int i,int j)
{
    int x=getfather(i),y=getfather(j);
    if(x==y) return;
    if(b[i]>b[j]) a[x]=y;
    else
    {
        if(b[i]==b[j]) b[i]++;
        a[x]=y;
    }
    num-=1;
}

int main(){
    int N,M,i,j,k;
    while((cin>>N)&&N)
    {
        num=N-1;
        for(int k=1;k<=N;k++)
        {
            a[k]=k;
            b[k]=1;
        }
        cin>>M;
        while(M!=0)
        {
            cin>>i>>j;
            connect(i,j);
            M--;
        }
        cout<<num<<endl;

    }
    return 0;
}




