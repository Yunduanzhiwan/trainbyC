#include<bits/stdc++.h>

using namespace std;
int m,n;
int get(int num){
	if(num<=n){
		return get(2*num)+get(2*num+1)+1;
	}
	return 0;
}
int main(){
	
	while(1){
		cin>>m>>n;
		if(m==0&&n==0){
			break;
		}
		cout<<get(m)<<endl;
		
	}
	
	
	
	return 0;
}
