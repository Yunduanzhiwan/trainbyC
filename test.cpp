///**
//���׺���ʽ
//1��ɨ���ַ���
//2.�ж��ַ�
//3.���ֻ���С���㣬���
//
//4.* / + - �����ȼ����ڵ��ڱ��ַ��ĵ�����ֱ���Լ�������С������ջ��
//
//5.�� ���ȼ���ͣ�ֱ����ջ
//6.�� һֱ��ջ��ֱ�������� ���� 
//
//
//*/
//
//#include<iostream>
//#include<string.h>
//#include<stack>
//#include<map>
//using namespace std;
//map<char,int> priority;
//map<char ,int> Map; 
//stack<char> s;
//int main(){
//	Map['+']=0;
//	Map['-']=0;
//	Map['*']=1;
//	Map['/']=1;
//	Map['(']=-1;
//	
//	string str;
//	string str2;
//	cin>>str;
//	int len=str.length();
//	int flag=1;
//	for(int i=0;i<len;){
//		int hasnum=0;
//		while((str[i]>='0'&&str[i]<='9')||str[i+1]=='.'){
////			if(flag||str[i-1]=='.'||(str[i-1]>='0'&&str[i-1]<='9')){
////				flag=0; 
////				cout<<str[i];
////			}else if(!(str[i-1]>='0'&&str[i-1]<='9')&&str[i-1]!='.'){
////				cout<<" "<<str[i];
////			}	
//			hasnum=1;
//			str2+=str[i]; 
//			cout<<str[i];
//			if(str[i+1]=='.'){	
//				cout<<".";
//				str2+=str[i+1];
//				++i;
//			}
//			++i;
//		}
//		if(hasnum){
//			str2+=' ';
//			cout<<" ";
//		}
//		//�ַ����� 
//		if(str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-'){
//			while(!s.empty()&&Map[str[i]]<=Map[s.top()]){
//				str2+=(s.top());
//				str2+=' ';
////				if(flag){
////					flag=0; 
////					cout<<s.top();
////				}else{
////					cout<<" "<<s.top();
////				}	
//				cout<<s.top()<<" ";
//				s.pop();
//			}
//			s.push(str[i]);
//			++i;
//		}
//		if(str[i]=='(')
//		{
//			s.push(str[i]);
//			++i;
//		 }
//		 if(str[i]==')'){
//		 	while(s.top()!='('){
//		 		str2+=(s.top());
//		 		str2+=' ';
////		 		if(flag){
////		 			flag=0; 
////					cout<<s.top();
////				}else{
////					cout<<" "<<s.top();
////				}
//				cout<<s.top()<<" ";
//		 		s.pop();
//			 }
//			 s.pop();//(�����ŵ���������� 
//		 	++i;
//		 }
//	}
//	while(!s.empty()){
//		str2+=(s.top());
//		str2+=' ';
//		cout<<s.top()<<" ";
////			cout<<" "<<s.top();
//		   s.pop();
//	}
////	cout<<"\n------------------\n";
////	cout<<str2<<endl;
//	//str2[str2.length()-1]='\0';
////	cout<<str2;
//	return 0;
//} 


/**
���׺���ʽ
1��ɨ���ַ���
2.�ж��ַ�
3.���ֻ���С���㣬���

4.* / + - �����ȼ����ڵ��ڱ��ַ��ĵ�����ֱ���Լ�������С������ջ��

5.�� ���ȼ���ͣ�ֱ����ջ
6.�� һֱ��ջ��ֱ�������� ���� 


*/

#include<iostream>
#include<string.h>
#include<stack>
#include<map>
using namespace std;
map<char,int> priority;
map<char ,int> Map; 
stack<char> s;
int main(){
	Map['+']=0;
	Map['-']=0;
	Map['*']=1;
	Map['/']=1;
	Map['(']=-1;
	
	string str;
	string str2;
	cin>>str;
	int len=str.length();
	int flag=1;
	for(int i=0;i<len;){
		int hasnum=0;
		while((str[i]>='0'&&str[i]<='9')||str[i+1]=='.'){
//			if(flag||str[i-1]=='.'||(str[i-1]>='0'&&str[i-1]<='9')){
//				flag=0; 
//				cout<<str[i];
//			}else if(!(str[i-1]>='0'&&str[i-1]<='9')&&str[i-1]!='.'){
//				cout<<" "<<str[i];
//			}	
			hasnum=1;
			str2+=str[i]; 
			if(str[i+1]=='.'){	
				//cout<<".";
				str2+=str[i+1];
				++i;
			}
			++i;
		}
		if(hasnum){
			str2+=' ';
		}
		//�ַ����� 
		if(  (str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-') ){
			if(i==0||(str[i-1]=='*'||str[i-1]=='/'||str[i-1]=='+'||str[i-1]=='-'||str[i-1]=='(')){
				if(str[i]=='-'){
					str2+=str[i];
				}
				//cout<<"q"<<str[i]<<endl; 
				++i;
			}else{
				
				while(!s.empty()&&Map[str[i]]<=Map[s.top()]){
					str2+=(s.top());
					str2+=' ';
	//				if(flag){
	//					flag=0; 
	//					cout<<s.top();
	//				}else{
	//					cout<<" "<<s.top();
	//				}	
					s.pop();
				}
				s.push(str[i]);
				++i;
			}
			
			
		}
		//else if((str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-')&&(str[i-1]=='*'||str[i-1]=='/'||str[i-1]=='+'||str[i-1]=='-')){
		//	cout<<"q"<<str[i]<<endl;
		//	str2+=str[i];
	///	}
		if(str[i]=='(')
		{
			s.push(str[i]);
			++i;
		 }
		 if(str[i]==')'){
		 	while(s.top()!='('){
		 		str2+=(s.top());
		 		str2+=' ';
//		 		if(flag){
//		 			flag=0; 
//					cout<<s.top();
//				}else{
//					cout<<" "<<s.top();
//				}
		 		s.pop();
			 }
			 s.pop();//(�����ŵ���������� 
		 	++i;
		 }
	}
	while(!s.empty()){
		str2+=(s.top());
		str2+=' ';
//			cout<<" "<<s.top();
		   s.pop();
	}
//	cout<<"\n------------------\n";
//	cout<<str2<<endl;
	str2[str2.length()-1]='\0';
	cout<<str2;
	return 0;
} 
