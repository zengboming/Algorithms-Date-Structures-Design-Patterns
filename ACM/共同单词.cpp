#include<iostream>
#include<string>
using namespace std;

#define MAXN 110

string x[MAXN];
string y[MAXN];

int b[MAXN][MAXN];
int c[MAXN][MAXN];

int flag = 1;

void LCS_LENGTH(int m,int n)
{
	int i,j;
	for(i=1;i<=m;i++)
		c[i][0] = 0;
	for(j=0;j<=n;j++)
		c[0][j] = 0;

	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i] == y[j])
			{
				c[i][j] = c[i-1][j-1]+1;
				b[i][j] = 2;
			}
			else if(c[i-1][j] >= c[i][j-1])
			{
				c[i][j] = c[i-1][j];
				b[i][j] = 3;
			}
			else
			{
				c[i][j] = c[i][j-1];
				b[i][j] = 1;
			}
		}
	}
}


void PRINT_LCS(int m,int n)
{
	if(m==0 || n==0)
		return ;

	if(b[m][n] == 2)
	{
		PRINT_LCS(m-1,n-1);
		if(flag == 1)   //用于控制单词之间的空格
		{
			cout<<x[m];
			flag++;
		}
		else
			cout<<" "<<x[m];
	}
	else if(b[m][n] == 3)
		PRINT_LCS(m-1,n);
	else
		PRINT_LCS(m,n-1);
}


int main()
{
	int flag2 = 1;
	while(flag2)
	{
		int i=1,j=1;
		while(cin>>x[i] && x[i] != "#")
		{
			i++;
		}
		i--;
		if(i==0)
			break;

		while(cin>>y[j] && y[j] != "#")
		{
			j++;
		}
		j--;
		if(j==0)
			break;

		LCS_LENGTH(i,j);
		PRINT_LCS(i,j);
		cout<<endl;
		//cout<<"\n"<<c[i][j]<<"\n";
	}

	return 0;
}


/*
as b sad cd sad swq #
asd sad qdw b dsa swq #
*/
