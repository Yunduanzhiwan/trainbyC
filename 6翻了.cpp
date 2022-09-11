#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int len=str.length();
	int size=0;
	int t;
	for(int i=0;i<len;++i){
		size=0;
		if(str[i]=='6'){
			 t=i;
			while(str[t]=='6'&&t<len){
				t++;
			} 
		}
		size=t-i;
		if(size>9){
			cout<<"27";
			i=t-1;
		}
		else if(size>3){
			cout<<"9";
			i=t-1;
		}else{
			cout<<str[i];
		}
		
	}
	return 0;
}
