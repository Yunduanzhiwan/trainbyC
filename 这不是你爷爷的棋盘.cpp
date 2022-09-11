#include<bits/stdc++.h>
using namespace std;
const int MAX=25;
int map[MAX][MAX];
int main(){
	int n;
	cin>>n;
	char ch,pre;
	int hw,hb;
	int hsum;
	char lpre[MAX];
	int lsum[MAX];
	hw=hb=0;
	int lw[MAX]={0};
	bool flag=true;
	for(int i=0;i<n;++i){
		lsum[i]=0;
		lpre[i]='a';
	}
	for(int i=0;i<n;++i){
		hw=hsum=0;
		pre='a';
//		for(int j=0;j<n;++j){
//			cout<<"lei:"<<j<<"="<<lsum[j]<<endl;	
//		}
		for(int j=0;j<n;++j){
			cin>>ch;
			if(ch=='W'){	
				hw++;
				lw[i]++;
				if(pre=='B'){
					hsum=0;
				}
				if(lpre[j]=='B'){
					lsum[j]=0;	
				}
			}
			if(ch=='B'&&pre=='W'){
				hsum=0;
			}
			if(ch=='B'&&lpre[j]=='W'){
				lsum[j]=0;
			}
			hsum++;
			lsum[j]++;
			if(hsum>=3){
		//		cout<<i<<"超过3个"<<endl;
				flag=false;
			}
			if(lsum[j]>=3){
				flag=false;
		//		cout<<j<<"超过3个"<<endl;
			}
			//cout<<i<<lsum[i]<<endl;
			lpre[j]=ch;
			pre=ch;
		}
	//	cout<<"hw="<<hw<<endl;
		if(hw!=(n-hw)){
		//	cout<<i<<"超过3个"<<endl;
			flag=false;
		}
	//	cout<<"flag="<<flag<<endl;
	}
//	cout<<"flag="<<flag<<endl;
	for(int i=0;i<n;++i){
	//	cout<<i<<"列:"<<lsum[i]<<endl; 
		if(lw[i]!=(n-lw[i])){
			flag=false;
		//	cout<<i<<"超过3个"<<endl;
			break;
		}
	}
	if(flag){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n;++j){
//			if(map[i][j]==1){
//				hw++;
//			}
//		} 
//	}
	return 0;
}
