#include<stdio.h>
fun4(int a,int b){
	int res=0;
	if(a>0){
		res=b;
		if(a!=1){
			int v3=fun4(a-1,b)+b;
			res=v3+fun4(a-2,b);
		}
	}
	return res;
}
int main(){
	int a=108;
//	int b=2;
	int b=4;
	for(int i=0;i<=b;++i){
		int res=fun4(7,i);
		printf("%d %d\n",res,i);
	}

	
	return 0;
} 
