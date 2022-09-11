#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	string a,b;
	getline(cin,a);
//	getchar();
	getline(cin,b);
	int la=a.length();
	int lb=b.length();
	
	for(int i=0;i<la;++i){
		int falg=0;
		for(int j=0;j<lb;++j){
			if(a[i]==b[j]){
				falg=1;
				continue;
			} 
		} 
		if(falg==0){
			cout<<a[i];
		}
	}
	
	return 0;
} 
