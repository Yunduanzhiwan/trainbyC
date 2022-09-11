#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long a,b;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		if(a>b)	{
		swap(a,b);
		}
		int m=(long)((sqrt(5)+1)/2*(b-a));
		if(m==a){
			printf("0\n");
		}
		else{
			printf("1\n");
		} 
	}
	return 0;
}
