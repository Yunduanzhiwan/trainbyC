#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	
   long long a,b;
	
	double cha,bi,mo;
	
	cin>>a>>b;
	cha=b-a;
	bi=b/a;
	mo=b%a;
	a=b;
	
	bool falg=true;
	for(int i=2;i<n;++i){
		cin>>b;
		
		if(b-a!=cha&&(b/a!=bi)&&(b%a!=mo)){
			falg=false;
		}
		a=b;
	}
	
	if(falg)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
} 
