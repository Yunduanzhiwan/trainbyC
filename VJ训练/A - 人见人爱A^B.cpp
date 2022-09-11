#include<stdio.h>


int main(){
	int n,m;
	
	while(scanf("%d %d",&n,&m)!=EOF){
		if(n==0&&m==0){
			break;
		}
		if(m==0){
			printf("1\n");
		}else if(n==0){
			printf("0\n");
		}else{
			int res=1;
			while(m--){
				res*=n;
				res=res%1000;//第四位开始不参加运算直接舍去 
			}
			printf("%d\n",res);
		}
		
	}
	
	
	return 0;
} 
