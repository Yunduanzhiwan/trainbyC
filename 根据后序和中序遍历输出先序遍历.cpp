#include<iostream>
using namespace std;
#define MAX 500
int numh[MAX]={0};
int numz[MAX]={0};
void qian(int lh,int rh,int lz,int rz){
	if(lh>rh||lz>rz){
		return;	
	}
		cout<<" "<<numh[rh];
		int i;
		for(i=lz;i<=rz;++i){
			if(numz[i]==numh[rh]){
				qian(lh,lh+(i-lz-1),lz,i-1);
				qian(lh+(i-lz),rh-1,i+1,rz);
				return;
			}
		}
} 
 
int main(){
 	int n;
 	cin>>n;
 	int t;
 	for(int i=0;i<n;++i){
 		cin>>t;
 		numh[i]=t;
	 }
	 for(int i=0;i<n;++i){
	 	cin>>t;
	 	numz[i]=t;
	 }
	 cout<<"Preorder:";
	 qian(0,n-1,0,n-1);
 	
 	return 0;
}
