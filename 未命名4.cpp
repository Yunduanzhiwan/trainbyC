#include<stdio.h>
int set[1002];
int findindx(int a){
	if(set[a]!=a){
		set[a]=findindx(set[a]);
		
	}
	return set[a];
}
void join(int a,int b){
	int a1=findindx(a);
	int b1=findindx(b);
	if(a1!=b1){
		set[a1]=b1;
	}
}
int main(void){
	int n,m;//n 总共城市，M条路 
	int a,b;// a-b 之间有一条路 
	int cont=-1;
	while(scanf("%d",&n),n){
		if(n==0)
			break;
		scanf("%d",&m);
		cont=n-1;
		for(int i=0;i<n;i++){
			set[i]=i;
		}
		for(int i=0;i<m;i++){
			scanf("%d %d",&a,&b);
			join(a,b);
		}
		for(int k=0;k<n;k++){
			if(set[k]==k){
				cont++;
			}
		} 
		printf("%d\n",cont);
	}
	return 0;
} 
