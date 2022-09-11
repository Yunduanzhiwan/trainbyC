#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
ostringstream os;
int solve(int n){
	int presum=-1;
	int sum=0;
	int t=n;
	string tstr;
	int len=0;
	for(int i=2;i<=9;++i){
		
		t=n*i;
		sum=0; 
		
		while(t){
			sum+=t%10;
			t/=10;
		} 
	//	cout<<"sum="<<sum<<endl;
		if(presum==-1){
			presum=sum;
		}
		if(presum!=sum)return -1;
//		cout<<"t="<<t<<endl;
//		os.clear();
//		os<<t;
//		
//		tstr=os.str();
//		len=tstr.length();
//	//	cout<<"tstr="<<tstr<<endl;
//		for(int j=0;j<len;++j){
//			cout<<"tstr[j]="<<(tstr[j]-'0')<<endl;
//			sum+=(tstr[j]-'0'); 
//		}
//		if(presum!=-1&&presum!=sum){
//			cout<<"不是初心数"<<endl;
//			return false;
//		}
//		cout<<"sum="<<sum<<endl;
//		presum=sum;
	}
	return presum;
}
int main(){
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		int res=solve(m);
		if(res!=-1) cout<<res<<endl;
		else cout<<"NO"<<endl;
		
		
		
	}
	
	
	return 0;
}
