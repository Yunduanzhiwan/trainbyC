#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int s,e;
	cin>>s>>e;
	int sum=0;
	int t;
	for(int i=0;t<e;++i){
		t=s+i;
		printf("%5d",t);
		if((i+1)%5==0||t==e){
			printf("\n");
		}
		sum+=t;
	}
	printf("Sum = %d",(e+s)*(e-s+1)/2);
	
	return 0;
} 
