#include<iostream>
#include<string.h>
using namespace std;


int main(){
	int suo=0;
	string str;
	getline(cin,str);
	
	int len=str.length();
		int i=0;
	while(i<len){
		cout<<str[i];
		if(str[i]=='main'){
			cout<<"xxxxxxxxxxxx\n";
		}
		i++;
	}
	
	return 0;
} 
