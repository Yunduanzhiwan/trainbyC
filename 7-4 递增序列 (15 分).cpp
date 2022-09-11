#include<bits/stdc++.h>
using namespace std;
int b[2002];
int main(){
	int n,d;
	scanf("%d %d",&n,&d);
//	cin>>n>>d;
	b[0]=0;
	unsigned long long res=0;
	for(int i=1;i<=n;++i){
		scanf("%d",&b[i]);
		while(b[i]<=b[i-1]){
			b[i]+=d;
			++res;
		}
	}
	cout<<res<<endl;
	
	
	return 0;
}
