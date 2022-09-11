#include<iostream>
#include<string.h>
using namespace std;


int main(){
	string str;
	
	while(getline(cin,str)){
		int len=str.length();
		//cout<<"str[len]="<<str[len-1]<<endl;
		if(str[len-1]=='?'){
			cout<<"Quack!"<<endl;
		}else if(str[len-1]=='.'){
			cout<<"*Nod*"<<endl;
		}else{
			break;
		}
	}
	
	
	return 0;
} 
