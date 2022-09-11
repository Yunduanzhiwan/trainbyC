#include<iostream>
#include<stack>
using namespace std;
stack<int> s1;
stack<char> s2;
int main(){
    int n,t;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>t;
        s1.push(t);
    }
    char ch;
    for(int i=0;i<n-1;++i){
        cin>>ch;
        s2.push(ch);
    }
    int a,b;
    
    double res=0;
    while(!s1.empty()&&!s2.empty()){
        a=s1.top();s1.pop();
        b=s1.top();s1.pop();
        ch=s2.top();s2.pop();
//        if(ch=='/'&&a==0){
//        	cout<<"ERROR: "<<b<<"/0"<<endl;
//        	exit(0);
//		}

	//	cout<<b<<" "<<ch<<" "<<a<<endl;
		switch(ch){
			case '+':
				s1.push(b+a);
				break;
			case '-':
				s1.push(b-a);
				break;
			case '*':
				s1.push(b*a);
				break;
			case '/':
				if(a==0){
		        	cout<<"ERROR: "<<b<<"/0"<<endl;
		        	exit(0);
				}
				s1.push(b/a);
				break;
			default:
				break;
		}
    }
    while(!s1.empty()){
        	cout<<s1.top()<<endl;
        	s1.pop();
	}
    
    return 0;
}
