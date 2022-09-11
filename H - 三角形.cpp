#include<iostream>
#include<string.h>
using namespace std;
//H - 三角形 
/*
输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;
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
