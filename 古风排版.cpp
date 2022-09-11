#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,t,it;
	char ch;
	cin>>h;
	getchar();
	string str;
	getline(cin,str);
	int len=str.length();//字符串长度 
	int le=(len%h==0?len/h:len/h+1);//列数 
	vector<char>* v=new vector<char>[le];//le列个可变长数组 
	t=0;
	for(int i=0;i<le;++i){
		for(it=t;it<=t+h;++it){
			ch=str[it];
			if(it>=len)//最后一行，用空格补齐 
				ch=' ';
			v[i].push_back(ch);
		}
		t+=h;
	}
	for(int i=0;i<h;++i){
		for(int j=le-1;j>=0;--j)
			cout<<v[j][i];
		cout<<endl;
	}
	delete v;
	return 0;	
}
