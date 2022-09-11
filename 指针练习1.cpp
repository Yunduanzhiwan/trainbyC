//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
////
////输出前缀表达式的运算结果，保留小数点后1位，或错误信息ERROR。
//double jisuan(double a,double b,char c){
//	if(c=='*')  return a*b;
//	
//	else if(c=='-')	return a-b;
//	
//	else if(c=='+')	return a+b;
//
//	else if(b==0){
//		cout<<"ERROR\n";
//		exit(0);
//	} 
//	return a/b;
//}
//int main(){
//	string str;
//	stack<double> s;
//	vector<char> v;
//	getline(cin,str);
//	getchar(); 
//	for(int i=str.length()-1;i>=0;++i){
//		if(str[i]!=' '){
//			
//		}
//	}
//}



#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<math.h>
#include<string>
#include<cstdio>
#include<cstdlib> 
using namespace std;
map<char, int> p;
stack<char> s;
queue<char> q;//队列 
int main(void){
 p['*'] = p['/'] = 1;
 p['-'] = p['+'] = 0;
 p['('] = p[')'] = -1;
 string str;
 char ch[22];
 int cont=0;
 cin >> str;
 for(int i=0;i<str.size();i++){
  if(isdigit(str[i])){
   if(cont==1)
   {
    q.push(' ');
   }
   q.push(str[i]);
   //ch[cont++]=str[i];
   while(isdigit(str[i+1])||str[i+1]=='.'){
    
    q.push(str[++i]);
   }
   cont=1;
  }
  else if(str[i]=='('){
   s.push(str[i]);
  }else if(str[i]==')'){
   while(s.top()!='('&&!s.empty()){
    q.push(' ');
//    ch[cont++]=s.top();
//    ch[cont++]=' ';
   q.push(s.top());
    s.pop();
   }
   if(s.top()=='(')
   s.pop();//( 不输出 
  }
  else if(p[str[i]]==0&&(i==0||str[i-1]=='(')){
   if(str[i]=='-')
   {
    if(cont==1)
    {
     q.push(' ');
    }
    q.push(str[i]);
    //ch[cont++]=str[i];
    while(isdigit(str[i+1])||str[i+1]=='.'){
     
     q.push(str[++i]);
    }
    cont=1;
   
   }
    
   
  }
  else {
   while(!s.empty() && ( p[s.top()]>=p[str[i]] )){
    q.push(' ');
//    ch[cont++]=s.top();
//    ch[cont++]=' ';
    q.push(s.top());
    s.pop();
   }
   s.push(str[i]);
  }
 }
 
 while(!s.empty()){
  q.push(' ');
 // ch[cont++]=' ';
//  ch[cont++]=s.top();
//  ch[cont++]=' ';
  q.push(s.top());
  s.pop();
 }
// cout<<q.front();
//if(q.front()==' '){
//  q.pop();
//}
//
 while(!q.empty()){
  cout<<q.front();
  q.pop();
 }
//cout<<"cont= "<<cont<<endl;
// for(int i=0;i<cont-3;i++){
//  if(ch[i]!=' '){
//   cout<<ch[i];
//   
//  }else{
//   cout<<" ";
//  }
//  
// }
 
}
