#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	string s1[n],s2[n];
	int res[n];
	for(int i=0;i<n;++i)
		cin>>s1[i];
	for(int i=0;i<n;++i){
		cin>>s2[i];
	}
	
	int ind=0;
	for(int i=0;i<n;++i){
		ind=-1;
		for(int j=0;j<n;++j){
			if(s1[i]==s2[j]){
				ind=j;
				break;
			}
		}
		if(ind!=-1){
			res[i]=i-ind;//第i个人上升的排名 
		}
	}
	int maxres=-9999;
	for(int i=0;i<n;++i){
		if(res[i]>maxres){
			ind=i;
			maxres=res[i];
		}
	}
	//cout<<"maxres="<<maxres<<endl;
	if(maxres>0)
		cout<<s1[ind]<<endl;
	else
		cout<<"suspicious"<<endl;
	
	return 0;
}
