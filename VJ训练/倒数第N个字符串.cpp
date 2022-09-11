#include<iostream>
using namespace std;
int main(){
	int l, n;
	cin>>l>>n;
	char ch[l];
	for(int i=0;i<l;++i){
		ch[i]='z';
	}
	int i=0;
	while(n>0){
		int T=n%26; 
		n/=26;
		ch[l-i-1]-=(T-1);
		i++;
	}
	for(int i=0;i<l;++i){
		cout<<ch[i];
	}
	
	
	return 0;
}
