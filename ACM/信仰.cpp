#include<iostream>
using namespace std;

int set[50005];
int rank[50005];
int count;

void init(int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		set[i]=i;
		rank[i]=1;
	}
}
int find(int x)
{
	int i,j,r = x;
	while (set[r] != r)
		r = set[r];
	i = x;
	while (i != r)
	{
		j = set[i];
		set[i] = r;
		i = j;
	}
	return r;
}
void merge(int x, int y)
{
	int k,q;
	k=find(x);
	q=find(y);
	if(k==q) return;
	if(rank[k]>rank[q])   set[k]=q;
	else
	{
		set[q]=k;
		if(rank[k]==rank[q]) rank[k]++;
	}
	count=count-1;
}

int main()
{
    int n,m,i,j,k=1;
    while((cin>>n>>m)&&n&&m)
    {
        init(n);
        count=n;
        while(m!=0)
        {
            cin>>i>>j;
            merge(i,j);
            m--;
        }
        cout<<"Case "<<k++<<": "<<count<<endl;
    }
    return 0;
}
