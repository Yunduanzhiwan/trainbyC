#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char c;
	int a,b;
	while(n--){
		cin>>c>>a>>b;
		switch(c){
			case '+':
				cout<<a+b<<endl;
				break;
			case '-':
				cout<<a-b<<endl;
				break;			
			case '*':
				cout<<a*b<<endl;
				break;	
			case '/':
				if(b!=0){
					if(a%b!=0){
						printf("%.2lf\n",(double)a/b);
					}
					else{
					 printf("%d\n",a/b); 
					 } 
					 
				}
				break;
			default:
				break;
		}
	}
	return 0;
}
