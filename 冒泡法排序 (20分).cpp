#include<iostream>
using namespace std;

int maopao(int list[],int n,int k){
	for(int i=0;i<k;++i){
		for(int j=0;j<n-1-i;++j){
			if(list[j]>list[j+1]){
				int t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
			}
		}
	}
		cout<<list[0];
		for(int i=1;i<n;++i){
			cout<<" "<<list[i]; 
		}
		cout<<endl;
}
int list[105];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;++i){
		cin>>list[i];
	}
	maopao(list,n,k);
	return 0;
} 
