#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+6;
int a[MAXN] = {};
 
int main() {
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	} 
	scanf("%d",&m);
	for(int i=0;i<m;++i){
		int t;
		scanf("%d",&t);
		if(t<=a[0]){
			printf("%d\n",a[0]);
		}else if(t>=a[n-1]){
			printf("%d\n",a[n-1]);
		}
		else{
			int l=0,r=n;
			while(l<r){
				int min=(l+r)/2;
				if(a[min]>t){
					r=min;
				}else{
					l=min+1;
				}
			}
			int ans=l;//跟下面这函数相同的作用   找到第一个比t大的数 
		//	int ans=upper_bound(a,a+n,t)-a;
			if(a[ans]-t<t-a[ans-1]){
				printf("%d\n",a[ans]);
			}else{
				printf("%d\n",a[ans-1]);
			}
		}
	}
    return 0;
}
