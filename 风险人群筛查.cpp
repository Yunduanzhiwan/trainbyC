#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int n,k,t,xl,yd,xr,yw,x,y;
	cin>>n>>k>>t>>xl>>yd>>xr>>yw;
	int resnum1,resnum2;
	resnum1=resnum2=0;
	
	int has1,has2,has;
	for(int i=1;i<=n;++i){
		has1=has2=has=0;
	//	cout<<"i="<<i<<endl;
		for(int j=1;j<=t;++j){
			cin>>x>>y;
			//for(int m=1;m<=k;++m){
				if(x>=xl&&x<=xr&&y>=yd&&y<=yw){
					has1++;
		//			cout<<"has1="<<has1<<" k="<<k<<endl;
					if(has1==k){
						has2=1;
					
					}
					has=1;	
				}else{
					has1=0;
				}
			//}
		}
	//	cout<<"has1="<<has1<<" has2="<<has2<<endl;
		if(has){
			resnum1++;
		}
		 if(has2){
			resnum2++;
		}
	//	cout<<"resnum1="<<resnum1<<endl;
	//	cout<<"resnum2="<<resnum2<<endl;
	}
	cout<<resnum1<<endl;
	cout<<resnum2<<endl;
	return 0;
} 
