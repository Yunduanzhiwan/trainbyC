#include<iostream>
#include<string.h>
using namespace std;
//H - ������ 
/*
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;
*/
int main(){
	int m;
	double a,b,c;
	cin>>m;
	while(m--){
		cin>>a>>b>>c;
		if(a+b>c && a+c>b && b+c>a) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
