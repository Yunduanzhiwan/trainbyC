#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define mod 9982435399824353
int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int al=a.length();
	int bl=b.length();
	int res=0;
	cout<<al<<" "<<bl<<endl;
	int last=0;
	int pos=0;
	for(int i=0;i<al;){
	//	cout<<"i="<<i<<" res="<<res<<endl;
		cout<<a.substr(i,bl)<<endl; 
		if(a.substr(i,bl)==b){
		//	if(res==0)res=1;
		//(res*bl%9982435399824353)
			res=res+1+i;
			last=i;
			cout<<"res="<<res<<" last="<<last<<endl;
		//	i+=bl-1;
		
		}
		++i;
	} 
	cout<<res<<endl;
	
	
	return 0;
} 
