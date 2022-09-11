#include<iostream>
 #include<math.h>
using namespace std;
int len=0;
int main(){
	int n;
	char c;
	cin>>n>>c;
	int sum=0;

	
	len=(sqrt( (n-1)/2+1 )-1);
	sum=4*len+2*len*len+1;
	len=len*2+1;
//	cout<<"len="<<len<<" sum="<<sum<<endl;
	//总行数   len/2为上下部分的行数 
	//上半部分 
	for(int i=0;i<len/2;++i){// 
		for(int j=0;j<i;++j){//计算打印的空格个数，当前的行数 
			cout<<" ";
		}
		for(int j=0;j<2*(len/2-i)+1;++j){
			cout<<c;
		}
		cout<<endl;
	}
	for(int i=len/2;i>=0;--i){
		for(int j=0;j<i;++j){
			cout<<" ";
		}
		for(int j=0;j<2*(len/2-i)+1;++j){
			cout<<c;
		}
		cout<<endl;
	}
	cout<<n-sum<<endl;
	return 0;
} 
