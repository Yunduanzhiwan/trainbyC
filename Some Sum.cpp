#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"Either"<<endl;return 0;
	}
	if(n==2){
		cout<<"Odd"<<endl;return 0;
	}
	if(n%2==0){
	cout<<"Even"<<endl;return 0;
	} 
	if(n%2>0){
	cout<<"Either"<<endl;return 0;
	} 
	
	return 0;
}
