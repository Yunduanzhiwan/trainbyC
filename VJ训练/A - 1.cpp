#include<iostream>
using namespace std;

struct Pai{
	char num;
	char ch;
	
	Pai(char num_,char ch_):num(num_),ch(ch_){
	}
	operator ==(const Pai& p){
		if(p.num==num||p.ch==ch)return true;
		return false;
	}
};
int main(){
	
	char num,ch;
	char num1,ch1;
	cin>>num>>ch;
	Pai p(num,ch);
	int falg=0;
	for(int i=0;i<5;++i){
		cin>>num1>>ch1;
		Pai p2(num1,ch1);
		if(p==p2)falg=1;
	}
	if(falg)cout<<"YES\n";
	else cout<<"NO\n";
	
	return 0;
}
