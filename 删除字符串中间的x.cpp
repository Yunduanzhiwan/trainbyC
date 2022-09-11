/*
删除字符串中间的*


从头开始匹配，除去开头和结尾的*不处理  注意：开头和结尾可能不是*  如： 12ad**sadf*aab*****


删除 第一个不是*到最后一个不是*中间的所有*      

 
*/ 

#include<iostream>
#include<string.h>
using namespace std;
char str[100];//一次性字符串似乎可以存6万多个，一般网址测试数据，不多，暂时用100
//删除start和end中间的*，，靠移动 
void solve(char* start,char*end,char* readend){
//	cout<<"start="<<*start<<" end="<<*end<<endl;
		while(start<end){
//			cout<<"start="<<*start<<" end="<<*end<<endl;
			if(*start=='*'){
//				计算移动多少位，也就是多少个连续的*
				char* t=start;
				int count=0;
				while(*t=='*'&&t<end){
					count++;
					t++;
				}
//				cout<<"移动前str="<<endl;
//				puts(str);
//				cout<<"移动"<<count<<"个"<<endl;
				
				
	
				for(;(start+count)<=readend;++start){//当前的连续*开始 ,后面的cont全部向前移动cont位
					*start=*(start+count);
				} 
				*start='\0';
				
//				cout<<"str="<<endl;
//				puts(str);
				start=t;
				end=end-count; //移动以后end也会移动 
			}else{
				start++;
//				cout<<"start++"<<endl;
			}
		}
		
}

int main(){
	
	
	
	gets(str); 
	int len=strlen(str);
//	cout<<len<<endl;	
	char* s=str;
	char* end,*readend;
	end=readend=str+len-1;
	
//	cout<<"*s="<<*(s)<<endl; 
	
	while(*s=='*'){
		s++;
	}
	while(*end=='*'){
		end--;
	}
	solve(s,end,readend);
	puts(str);
	return 0;
}
