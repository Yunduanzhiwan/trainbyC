#include<iostream>
using namespace std;
#define N 10003 
void mmt(int num[],int num2[],int l,int r){
	
	if(l>=r){
		return;
	}
	
	cout<<num[r]<" ";
	
	int mid=0;
	for(int i=l;i<r;++i){
		if(num2[i]==num[r]){
			mid=i;
			break;
		}
	}
	
	
	
}
int main(){
	int num[N];
	int num2[N];
	
	int n,m;
	cin>>n;
	
	for(int i=1;i<=n;++i){
		cin>>num[i];
	}
	
	for(int i=1;i<=n;++i){
		cin>>num2[i];
	}
	
	mmt(num,num2,1,n);
	
	
	return 0;
} 
