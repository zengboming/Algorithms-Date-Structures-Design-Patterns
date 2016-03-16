#include<iostream>
#include<cstdio>
using namespace std;
#define N 100010
int pre[N];//前导数组
int rank[N];//节点个数
int node=0,edge=0;
int find(int i){
	while(pre[i]!=-1)
		i=pre[i];
	return i;
}

int Union(int i,int j){
	i=find(i);
	j=find(j);
	if(i==j)//如果i与j根节点相同，再加一条边就会形成回路
		return 0;
	else{
		pre[i]=j;//把i和j相连起来
		edge++;//边就相加1
		rank[j]+=rank[i];//把两个树的节点相加
		node=rank[j];
		return 1;
	}
}
int main(){
	int n,m,i,tree=1;
	for(i=0;i<N;i++){//初始化
		pre[i]=-1;
		rank[i]=1;
	}
	while(scanf("%d%d",&m,&n)!=EOF&&m!=-1){
		if(!m||!n){
			if(tree){
				if(edge==node-1||(edge+node==0))
					printf("Yes\n");
				else
					printf("No\n");
			}
			for(i=0;i<N;i++){//初始化
		        pre[i]=-1;
				rank[i]=1;
			}
			tree=1,edge=0,node=0;
		}
		else if(tree){
			tree=Union(m,n);
			if(!tree)
				printf("No\n");
		}
	}
}
