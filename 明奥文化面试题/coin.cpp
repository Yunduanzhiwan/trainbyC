#include<bits/stdc++.h>
using namespace std;
//const int Max=1000001;
//int arr[Max];
int main(){
//	freopen("c.in","r",stdin);
//	freopen("c.out","w",stdout);
	
	int n,t,max,sum,res,num;
	 cin>>n;
	sum=max=num=0;
	for(int i=0;i<n;++i){
		cin>>t;
		if(t==0){
			num++;
			t=-1;
		}
		sum+=t;
		
		if(sum>max) max=sum;
		
		if(sum<0)sum=0;
		
	}
	cout<<(num+max)<<endl;
	return 0;
}
