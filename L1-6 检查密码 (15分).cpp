#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h> 
using namespace std;
//密码必须由不少于6个字符组成，并且只能有英文字母、数字和小数点 .，还必须既有字母也有数字。
void panduan(string str){
	int l=str.length();
	if(l<6){
		cout<<"Your password is tai duan le."<<endl;
	}
	else{
		int y,num;
		y=num=0;
		int falg=1;
		for(int i=0;i<l;++i){
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
				++y;
			}
			else if((str[i]>='0'&&str[i]<='9')){
				++num;
			}
			else if(str[i]!='.'){
				falg=0;
			}
		}
		if(falg==0){
			cout<<"Your password is tai luan le."<<endl;
		}else if(y>0&&num==0){
			cout<<"Your password needs shu zi."<<endl;
		}else if(num>0&&y==0){
			cout<<"Your password needs zi mu."<<endl;
		}else if(num>0&&y>0){
			cout<<"Your password is wan mei."<<endl;
		}
	}	
	
	
}
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;++i){
		cin>>s;
		panduan(s);
	}
	return 0;
}
