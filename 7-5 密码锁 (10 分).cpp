#include<bits/stdc++.h>
using namespace std;
int n[4][4];
bool solve(){
	for(int i=1;i<=2;++i){
		for(int j=1;j<=3;++j){
			if(n[i][j]!=n[4-i][4-j]){
				return false;
			}
		}
	}
	return true;
}
int main(){
		int num;
		char ch;
		cin>>num;
		for(int i=0;i<num;++i){
			for(int j=1;j<=3;++j){
				for(int k=1;k<=3;++k){
					cin>>ch;
				//	scanf("%c",&ch);
					if(ch=='X'){
						n[j][k]=1;
					} else{
						n[j][k]=0;
					}
				}
			}
			bool res=solve();
			if(res){
				cout<<"YES"<<endl;
			}
			else {
				cout<<"NO"<<endl;
			}
		}
	
	return 0;
}
