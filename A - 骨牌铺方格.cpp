//在2×n的一个长方形方格中,用一个1× 2的骨牌铺满方格,输入n ,输出铺放方案的总数.
//例如n=3时,为2× 3方格，骨牌的铺放方案有三种,如下图：

#include<iostream>
using namespace std;
int main(){
	 
	 unsigned long long num[55];
	 num[1]=1;num[2]=2;
	 for(int i=3;i<=50;++i){
	 	num[i]=num[i-1]+num[i-2];
	 }
	 int ans;
	 while(scanf("%d",&ans)!=EOF){
	 	printf("%lld\n",num[ans]);
	 }
	return 0;
} 
