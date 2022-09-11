#include<iostream>
#include<string.h>
using namespace std;
int vis[100003]={0};
int main(){
	memset(vis,0,sizeof(vis));
	int n,num,t;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&num);
		if(num!=1){
			for(int j=0;j<num;++j){
				scanf("%d",&t);
				++vis[t];
			}
		}else{
			scanf("%d",&t);
		} 
	}
	int m;
	scanf("%d",&m);
	t=-1;
	int falg=1;
	int has=0;
	while(m--){
		scanf("%d",&t);
		if(!vis[t]){
			has=1;
			if(falg){
				falg=0;
				printf("%05d",t);
			}else{
				printf(" %05d",t);
			}
		
			vis[t]=1; 
		} 
	}
	if(!has){
		printf("No one is handsome\n");
	}
	return 0;
} 
