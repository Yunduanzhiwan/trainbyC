/*
汉诺塔是一个源于印度古老传说的益智玩具。
据说大梵天创造世界的时候做了三根金刚石柱子，
在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘，
大梵天命令僧侣把圆盘移到另一根柱子上，并且规定：在小圆盘上不能放大圆盘，
每次只能移动一个圆盘。当所有圆盘都移到另一根柱子上时，世界就会毁灭。

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
