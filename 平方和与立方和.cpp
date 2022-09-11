#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a>b){
			int t=a;
			a=b;
			b=t;
		}
		int res1=0,res2=0;
		for(int i=a;i<=b;++i){
			if(i%2){//ÆæÊı 
				res1+=(i*i*i);
			}else{
				res2+=(i*i);
			}
		}
		
		cout<<res2<<" "<<res1<<endl;
	}
	
	
	return 0;
}
