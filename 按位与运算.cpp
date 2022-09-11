#include<iostream>
using namespace std;

int main(){
	int a=5;
	cout<<(a&1)<<endl;  //判断奇数偶数， a%2 
	
	int b=333;
	int c=35;
	cout<<(b%c)<<endl;//b&c==b%c
	
	cout<<(1<<3)<<endl; //a<<b 表示把a转为二进制后左移b位（在后面添加 b个0）。a<<b的值实际上就是a乘以2的b次方
	return 0;
} 
