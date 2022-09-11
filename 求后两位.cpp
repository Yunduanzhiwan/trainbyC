#include<iostream>
#include<time.h>
using namespace std;

int main(){
	int a,b;
	time_t st,end;
	while(1){
		cin>>a>>b;
		if(a==0&&b==0){
			break;
		}
		
		st=clock();
		for(int i=0;i<=9;++i){
			for(int j=0;j<=9;++j){
				int t=(a*100+i*10+j); 
				if(t%b==0){
//					cout<<t;
					cout<<i<<j<<" ";
				}
			}
		}
		end=clock();
		cout<<endl<<"time="<<end-st;
		cout<<endl;
		
		
	} 
	
	
	return 0;
}
