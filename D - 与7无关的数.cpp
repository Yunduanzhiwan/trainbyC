/*
一个正整数,如果它能被7整除,或者它的十进制表示法中某一位上的数字为7,则称其为与7相关的数.现求所有小于等于n(n < 100)的与7无关的正整数的平方和.

Input
输入为一行,正整数n(n < 100)
Output
输出一行，包含一个整数，即小于等于n的所有与7无关的正整数的平方和。
Sample Input
21
Sample Output
2336
*/

#include<iostream>
using namespace std;
bool isqi(int n){
	if(n%7==0){
		return false;
	}
	int t=0;
	while(n){
		 t=n%10;
		 n/=10;
		 if(t==7){
		 	return false;
		 }
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	unsigned long long sum=1;
	for(int i=2;i<=n;++i){
		if(isqi(i)){
			sum+=(i*i);
		}
	}
	cout<<sum<<endl;
	return 0;
}
