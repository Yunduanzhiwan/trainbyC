/*
一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚，没有例外）。已经知道了笼子里面脚的总数a，问笼子里面至少有多少只动物，至多有多少只动物。

Input
一行，一个正整数a (a < 32768)。
Output
一行，包含两个正整数，第一个是最少的动物数，第二个是最多的动物数，两个正整数用一个空格分开。 
如果没有满足要求的答案，则输出两个0，中间用一个空格分开。
Sample Input
20
Sample Output
5 10
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2!=0||n>=32768||n<2){
		cout<<"0 0"<<endl;
		return 0;
	}
	if(n%4!=0){
		cout<<(n/4+1)<<" "<<n/2<<endl;
	}else{
		cout<<n/4<<" "<<n/2<<endl;
	}
	
	return 0;
} 
