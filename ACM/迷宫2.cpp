#include<iostream>
#include<cstdio>
using namespace std;
#define N 100010
int pre[N];//ǰ������
int rank[N];//�ڵ����
int node=0,edge=0;
int find(int i){
	while(pre[i]!=-1)
		i=pre[i];
	return i;
}

int Union(int i,int j){
	i=find(i);
	j=find(j);
	if(i==j)//���i��j���ڵ���ͬ���ټ�һ���߾ͻ��γɻ�·
		return 0;
	else{
		pre[i]=j;//��i��j��������
		edge++;//�߾����1
		rank[j]+=rank[i];//���������Ľڵ����
		node=rank[j];
		return 1;
	}
}
int main(){
	int n,m,i,tree=1;
	for(i=0;i<N;i++){//��ʼ��
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
			for(i=0;i<N;i++){//��ʼ��
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
