/*
��ŵ����һ��Դ��ӡ�ȹ��ϴ�˵��������ߡ�
��˵�����촴�������ʱ�������������ʯ���ӣ�
��һ�������ϴ������ϰ��մ�С˳������64Ƭ�ƽ�Բ�̣�
����������ɮ�°�Բ���Ƶ���һ�������ϣ����ҹ涨����СԲ���ϲ��ܷŴ�Բ�̣�
ÿ��ֻ���ƶ�һ��Բ�̡�������Բ�̶��Ƶ���һ��������ʱ������ͻ����

*/ 

#include<iostream>
using namespace std;
int n;
char a,b,c;

void han(int n,char a,char b,char c){
	if(n==1){
		cout<<n<<": "<<a<<" -> "<<b<<endl;
	}else{
		han(n-1,a,c,b);
		cout<<n<<": "<<a<<" -> "<<b<<endl;
		han(n-1,c,b,a);
	}
}

int main(){
	cin>>n;
	cin>>a>>b>>c;
	han(n,a,b,c); 
	
	return 0;
} 
