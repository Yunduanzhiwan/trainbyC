#include<bits/stdc++.h>
using namespace std;

int ls[102];
int rs[102];

int main(){
	int n,p1,p2,p3,t1,t2,res;
	res=0;
	int qans,tans,ans;
	cin>>n>>p1>>p2>>p3>>t1>>t2;
	rs[0]=0;
	for(int i=1;i<=n;++i){
		cin>>ls[i]>>rs[i];
		tans=rs[i]-ls[i];
		res+=(tans*p1);
		qans=ls[i]-rs[i-1];
//		if(ls[i])
		if(qans>t1){
			if(qans-t1>t2){
				ans=(qans-t1-t2); 
				res+=ans*p3;
				qans-=ans;
			}
			ans=qans-t1;
			res+=ans*p2;
			qans-=ans;
		}
		res+=qans*p1;
	}
	cout<<res<<endl;
	
	
	return 0;
}
