#include<iostream>
#include<math.h>
#include<string.h>
using namespace std; 
struct node{
	int num;
	string name;
}nos[50]; 
int main(){
	int n;
	cin>>n;
	double res=0;
	int t;
	for(int i=0;i<n;++i){
		cin>>nos[i].name>>t;
		nos[i].num=t;
		res+=t;
	}
	res/=n;
	res/=2;
	int Min=0x3f3f3f3f;
	int index=-1;
	for(int i=0;i<n;++i){
		
		if(fabs(res-nos[i].num)<Min){
			Min=fabs(res-nos[i].num);
			index=i;
		}
	}
	cout<<int(res)<<" "<<nos[index].name<<endl;
	
	
	
	return 0;
}
