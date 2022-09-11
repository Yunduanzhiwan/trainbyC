/*
一个整数“犯二的程度”
定义为该数字中包含2的个数与其位数的比值。
如果这个数是负数，则程度增加0.5倍；如果还是个偶数，
则再增加1倍。例如数字-13142223336是个11位数，其中有3个2，
并且是负数，也是偶数，则它的犯二程度计算为：3/11×1.5×2×100%，
约为81.82%。本题就请你计算一个给定整数到底有多二。

*/ 
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	string str;
//	scanf("%s",&str);
	cin>>str;
//	printf("xxx-> %s\n",str);
	cout<<str<<endl;
	int len=str.length();
	double point=0;
	int len2=0;
	int reslen=0;
	for(int i=0;i<len;++i){
		if(str[i]=='2'){
			++len2;
		}
		if(str[i]>='0'&&str[i]<='9'){
			++reslen;
			
		}
	} 
//	cout<<"reslen="<<reslen<<" len2="<<len2<<endl;
	point=1.0*len2/reslen*(str[0]=='-'?1.5:1)*((str[len-1]-'0')%2==0?2:1);
	printf("%.2lf%\n",point*100);
	
	return 0;
}
