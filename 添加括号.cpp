//C - Ìí¼ÓÀ¨ºÅ
#include<iostream>
using namespace std;
int can(int *a,int n){
	if(n==2){
		return a[0]/a[1];
	}else{
		for(int i=1;i<n;++i){
			int t=a[0];
			for(int j=1;j<=i;++j){
				t=t/a[j];
			}	
			
		}
		
		
		
	}
}
int main(){
	int t,n;
	
	cin>>t>>n;
	
	int a[n];
	while(t--){
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		
	}
	
	
	
	return 0;
} 
