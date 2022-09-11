#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	unsigned long long n;
	int falg=1;
	while(t--){
		falg=1;
		scanf("%lld",&n);
		unsigned long long i;
		for(i=2;i<=n;i*=2);
		if(i==n){
			printf("NO\n");
			falg=0;
		}
		if(falg){
			printf("YES\n");
		}
	}
	return 0;
} 
