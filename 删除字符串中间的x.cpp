/*
ɾ���ַ����м��*


��ͷ��ʼƥ�䣬��ȥ��ͷ�ͽ�β��*������  ע�⣺��ͷ�ͽ�β���ܲ���*  �磺 12ad**sadf*aab*****


ɾ�� ��һ������*�����һ������*�м������*      

 
*/ 

#include<iostream>
#include<string.h>
using namespace std;
char str[100];//һ�����ַ����ƺ����Դ�6������һ����ַ�������ݣ����࣬��ʱ��100
//ɾ��start��end�м��*�������ƶ� 
void solve(char* start,char*end,char* readend){
//	cout<<"start="<<*start<<" end="<<*end<<endl;
		while(start<end){
//			cout<<"start="<<*start<<" end="<<*end<<endl;
			if(*start=='*'){
//				�����ƶ�����λ��Ҳ���Ƕ��ٸ�������*
				char* t=start;
				int count=0;
				while(*t=='*'&&t<end){
					count++;
					t++;
				}
//				cout<<"�ƶ�ǰstr="<<endl;
//				puts(str);
//				cout<<"�ƶ�"<<count<<"��"<<endl;
				
				
	
				for(;(start+count)<=readend;++start){//��ǰ������*��ʼ ,�����contȫ����ǰ�ƶ�contλ
					*start=*(start+count);
				} 
				*start='\0';
				
//				cout<<"str="<<endl;
//				puts(str);
				start=t;
				end=end-count; //�ƶ��Ժ�endҲ���ƶ� 
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
