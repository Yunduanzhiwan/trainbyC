#include<iostream>
using namespace std;
/*
https://pintia.cn/problem-sets/1375641591910768640/problems/1375641640290553856
L1-1 寻找250 (10 分)
对方不想和你说话，并向你扔了一串数…… 而你必须从这一串数字中找到“250”这个高大上的感人数字。

输入格式：
输入在一行中给出不知道多少个绝对值不超过1000的整数，其中保证至少存在一个“250”。

输出格式：
在一行中输出第一次出现的“250”是对方扔过来的第几个数字（计数从1开始）。题目保证输出的数字在整型范围内。

输入样例：
888 666 123 -233 250 13 250 -222
输出样例：
5

*/
int main(){
	int n;//不需要数组，直接判断每个就ok 
	int i=0;//计数器 
	cin>>n;
	i++;// 第一个---》题目保证有一个 
	while(n!=250){//遭到就退出 
		cin>>n;
		i++;
	}
	cout<<i<<endl;
	
	return 0;
} 
