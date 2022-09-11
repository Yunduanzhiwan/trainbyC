#include<iostream>
#include<string.h>
#include<math.h>
#include<stack>
using namespace std;
stack<int> s1;
stack<char> s2;
int main() {
	int n;

	cin >> n;
	int num;
	char ch;;
	for(int i=0;i<n;++i){
		cin>>num;
		s1.push(num);
	}
	for(int i=0;i<n-1;++i){
		cin>>ch;
		s2.push(ch);
	}
	int a,b;
	char cc;
	while(!s1.empty()&&!s2.empty()){
		b=s1.top();s1.pop();
		a=s1.top();s1.pop();
		cc=s2.top();s2.pop();
	//	cout<<"a="<<a<<" b="<<b<<" c="<<cc<<endl;
		switch(cc){
			case '+':
				s1.push(a+b);
				break;
			case '-':
				s1.push(a-b);
				break;
			case '*':
				s1.push(a*b);
				break;
			case '/':
				if(b==0){
					cout<<"ERROR: "<<a<<"/0"<<endl;
					return 0;
				}
				s1.push(a/b);
				break;
		}
	}
	cout<<s1.top()<<endl;

	return 0;
}
