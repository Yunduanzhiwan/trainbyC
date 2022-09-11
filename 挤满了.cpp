#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int guan=n/m;
	int yu=n%m;
	if(yu==0){
		cout<<m<<endl;
		exit(0);
	}
	if(guan){
		cout<<int((m+yu)/2)<<endl;
	}
	else{
		cout<<yu<<endl;
	}
	
	return 0;
}
