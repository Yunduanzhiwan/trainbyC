#include<iostream>
#include<string>
using namespace std;
int n;
int d[100005];
int a[100005];
int b[100005];
int main(){
	int t,nt;
	cin>>t;
	string str;
	for(int i=0;i<t;++i){
		cin>>n;
		nt=n;
		cin>>str;
		for(int j=0;j<n;++j){
			b[j]=(str[j]-'0');
		}
		d[0]=b[0]+1;
		a[0]=1;
		for(int j=1;j<n;++j){
			if(b[j]>=d[j-1]){   //1>0  1==1 0==0
				d[j]=b[j]+1;
				a[j]=1;
			}
			else{//  1<2  0<1  0<2
				a[j]=0;
				d[j]=b[j];
				if(d[j-1]-d[j]>1){
					d[j]+=1;
					a[j]=1;
				}
			}
		}
		for(int j=0;j<n;++j){
			cout<<a[j]; 
		}
		cout<<endl;
		
	}
	
	
	return 0;
} 
