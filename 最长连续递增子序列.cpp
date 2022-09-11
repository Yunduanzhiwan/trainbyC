/*
链接：https://pintia.cn/problem-sets/434/problems/5860 
习题3.4 最长连续递增子序列 (20 分)
给定一个顺序存储的线性表，请设计一个算法查找该线性表中最长的连续递增子序列。
例如，(1,9,2,5,7,3,4,6,8,0)中最长的递增子序列为(3,4,6,8)。

输入格式:
输入第1行给出正整数n（≤10
?5
?? ）；第2行给出n个整数，其间以空格分隔。

输出格式:
在一行中输出第一次出现的最长连续递增子序列，数字之间用空格分隔，序列结尾不能有多余空格。

输入样例：
15
1 9 2 5 7 3 4 6 8 0 11 15 17 17 10
输出样例：
3 4 6 8

*/ 

#include<iostream>
using namespace std;
#define Max 100000
int nums[Max+2];
int main() {
	int n, maxi, maxsize, ind, indsize;
	cin >> n;
	cin >> nums[0];
	maxi = maxsize = ind = indsize = 0;
	for (int i = 1; i < n; ++i) {
		cin >> nums[i];
		if (nums[i] > nums[i - 1]) {
			indsize++;
			if (indsize > maxsize) {
				maxsize = indsize;
				maxi = ind;
			}
		}
		else {
			ind = i;
			indsize = 0;
		}
	}
    cout<< nums[maxi];
	for (int i = maxi+1; i <= (maxi + maxsize); ++i) cout<< " " << nums[i] ;
	return 0;
}
