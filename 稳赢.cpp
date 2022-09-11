#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	int i=0;
	while(1){
		cin>>str;
		if(str=="End"){
			break;
		}
			
			
	//	cout<<" current i is:"<<i+1<<endl;
		if(i==n){
			i=0;//重新计数 
			cout<<str<<endl;
		}else{
				if(str=="ChuiZi")
					cout<<"Bu\n";
				if(str=="JianDao")
					cout<<"ChuiZi\n";
				if(str=="Bu")
					cout<<"JianDao\n";
				i++; //正常计数 
			}
			
		}
		
	
	
	return 0;
} 
