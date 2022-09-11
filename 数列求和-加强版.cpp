/*
习题2.3 数列求和-加强版 (20 分)
给定某数字A（1≤A≤9）以及非负整数N（0≤N≤100000），
求数列之和S=A+AA+AAA+?+AA?A（N个A）。例如A=1, N=3时，S=1+11+111=123。

输入格式：
输入数字A与非负整数N。

输出格式：
输出其N项数列之和S的值。

输入样例：
1 3
输出样例：
123

 9 
99



sum=9*2+9*1 ----> 9*2%10  9*1+(9*2/10)%10   

*/



#include<iostream>
using namespace std;
int ch[100002]={0}; 
int main() {
	int n, m,t;
	cin >> n >> m;
	if(m==0){//0个情况 
		cout<<"0"<<endl;
		return 0;
	}
	int pre = 0;
	int ind = 0;
	for (int i = m; i >0; --i) {
		t = n * i+pre;
		ch[ind++] = (t  % 10);
		pre = t / 10;
	}
	if (pre)cout<<pre;
	for(int i=ind-1;i>=0;--i)cout<<ch[i];

	return 0;
}
