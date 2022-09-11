#include<iostream>
#include<string.h>
#include<sstream>
#include<map> 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int wu,yuan,chenji;
	map<int,int> m;
	map<int,int>::iterator it;
	while(n--){
		scanf("%d-%d %d",&wu,&yuan,&chenji);
		it=m.find(wu);
		if(it!=m.end()){
		//	cout<<"it->first="<<it->first<<"  "<<it->second<<endl; 
			m[it->first]=it->second+chenji;
		}else{
			
			m.insert(make_pair(wu,chenji));
		}
		
		
	}
	it=m.begin();
	int max=-1;
	int ind=it->first;
	for(;it!=m.end();++it){
		if(it->second>max){
			max=it->second;
			ind=it->first;
		}
	//	cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<ind<<" "<<max<<endl; 
	return 0;
}
