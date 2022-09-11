#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
bool isnum(string num){
	int l=num.length();
	int sum=0;
	for(int i=0;i<l;++i){
		if(isdigit(num[i])==0){
			return false;
		}else{
			sum=sum*10+(num[i]-'0');
		}
	}
	if(sum>1000||sum==0){
		return false;
	}
	return true;
}
int sum(string a,string b){
	int la=a.length();
	int lb=b.length();
	int suma,sumb;
	suma=sumb=0;
	int i;
	for(i=0;i<la;++i){
		suma=suma*10+(a[i]-'0');
	}
	i=0;
	for(;i<lb;++i){
		sumb=sumb*10+(b[i]-'0');
	}
	return suma+sumb;
}
int main(){
	string a,b;
	cin>>a;
	getchar();
	getline(cin,b);
	bool numa=isnum(a);
	bool numb=isnum(b);
	if(numa&&numb){
		cout<<a<<" + "<<b<<" = "<<sum(a,b)<<endl;
	}else if(numa&&!numb){
		cout<<a<<" + ? = ?"<<endl;
	}else if(!numa&&numb){
		cout<<"? + "<<b<<" = ?"<<endl;
	}else{
		cout<<"? + ? = ?"<<endl; 
	}

	return 0;
}
