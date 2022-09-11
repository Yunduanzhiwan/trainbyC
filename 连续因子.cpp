#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;


//L1-006 连续因子 (20分)
/*
一个正整数 N 的因子中可能存在若干连续的数字。
例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字。
给定任一正整数 N，要求编写程序求出最长连续因子的个数，并输出最小的连续因子序列。

输入格式：
输入在一行中给出一个正整数 N（1<N<2
?31
?? ）。

输出格式：
首先在第 1 行输出最长连续因子的个数；然后在第 2 行中按 
因子1*因子2*……*因子k 的格式输出最小的连续因子序列，
其中因子按递增顺序输出，1 不算在内。

*/
long long n;
int main(){
	cin>>n;
	int len=0;
	int tlen;
	int t,start;
	int sqr=sqrt(n);

	for(int i=2;i<=sqr;++i){
		t=1;
		for(int j=i;t<=n;++j){
			t*=j;
			tlen=j-i+1;
			if(n%t==0&&tlen>len){
				len=tlen;
				start=i;
			}
		} 
	
	} 
	if(len==0){
		len=1;
		start=n;
	}
	cout<<len<<endl;
	cout<<start;
	for(int i=1;i<len;++i){
		cout<<"*"<<(start+i);
	}
	return 0;
}

//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	unsigned int n,pro,lenth=0,first=0;
//	scanf("%d",&n);
//	//直接从练习因子开始算， 如 3*5*6*7 直接5*6*7  
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		pro=1;
//		cout<<"i="<<i<<endl;
//	for(int j=i;pro*j<=n;j++)
//	{
//		pro=pro*j;
//		cout<<"j="<<j<<" pro="<<pro<<endl; 
//		if(n%pro==0&&j-i+1>lenth)
//		{
//			first=i;
//			lenth=j-i+1;
//		}
//	}
//}
//if(lenth==0)
//{
//	lenth=1;
//	first=n;
//	
//}
//printf("%d\n",lenth);
//printf("%d",first);
//for(int k=1;k<lenth;k++)
//printf("*%d",first+k);
//}

