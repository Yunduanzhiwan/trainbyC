#include<iostream>
using namespace std;

int main(){
	int a=5;
	cout<<(a&1)<<endl;  //�ж�����ż���� a%2 
	
	int b=333;
	int c=35;
	cout<<(b%c)<<endl;//b&c==b%c
	
	cout<<(1<<3)<<endl; //a<<b ��ʾ��aתΪ�����ƺ�����bλ���ں������ b��0����a<<b��ֵʵ���Ͼ���a����2��b�η�
	return 0;
} 
