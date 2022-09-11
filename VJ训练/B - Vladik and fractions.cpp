#include<stdio.h>

int main(){
	long long n;
	
	scanf("%lld",&n);
	
	// 2/n=1/x+1/y+1/z  -> 1/n+(1/y+1/z) -> 1/n=1/y+1/z ->   1/n+1/n*(n+1)=1/n  -> x=n,y=n+1,z=n*n+1
	if(n!=1){
		printf("%lld %lld %lld\n",n,n+1,n*(n+1));	
	}else{
		printf("1 2 2\n");
	}
	
	
	
	
	return 0;
} 
