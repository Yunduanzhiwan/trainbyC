#include<iostream>
using namespace std;

int main(){
	int n;
	long long a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		int res=(a>b?(a-b+9)/10:(b-a+9)/10);
		cout<<res<<endl; 
	} 

	return 0;
}
