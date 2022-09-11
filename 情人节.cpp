#include<bits/stdc++.h>
using namespace std;
int main(){
	string str[16];
	
	string ans;
	int it=0;
	while(1){
		cin>>ans;
		if(ans==".")
			break;
		
		if(it<15){
			str[++it]=ans;
		}else{
			str[15]=ans;
		}
	}
	if(it<2)cout<<"Momo... No one is for you ..."<<endl;
	else if(it<14) cout<<str[2]<<" is the only one for you..."<<endl;
	else cout<<str[2]<<" and "<<str[14]<<" are inviting you to dinner..."<<endl;
	
	return 0;
}
