#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int yu;
	int size=0;
	yu=1;
	int chu;
	int flag=0;
	while(1){
		chu=yu/x;
		if(chu&&flag==0){
			flag=1;
		}
		if(chu||flag){
			cout<<chu;
		}
		yu=(yu%x);
		size++;
		//cout<<"chu="<<chu<<" yu="<<yu<<endl;
		if(yu==0){
			cout<<" "<<size<<endl;
			break;
		}
		yu=yu*10+1;
			
	}
	
	
	return 0;
}
