#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int len=str.length();
	int res=0;
	res+=25;
	if(len>0){
		res+=25;
	}
	res+=(len-1)*24;
	res+=len;
	cout<<res<<endl;
	
	return 0;
}

/*
王思力正在出售他的的写真集。 他有26张照片，标记为“a”到“z”，并且他已经将照片按照某种顺序汇编成照片小册子（可能还有一些照片重复）。 照片小册子可以描述为一串小写字母，由小册子中的照片组成。 他现在想出售一些“特别版”写真集，每本书都有一本插在书中任何位置的额外照片。 他想制作尽可能多的独特写真集， 以便赚更多的钱。 那么请问，他可以通过在他已经拥有的相册中插入一张额外的照片产生多少种不同的相簿？

请帮助王思力解决这个问题。

Input
第一次输入将是单个字符串s (1?≤?|s|?≤?20).字符串 s 仅包含小写英文字母

Output
输出一个整数等于王思力可以制作的相簿的个数。

Example
Input
a
Output
51
Input
hi
Output
76
Note
在第一个样例中，我们可以制造 'ab','ac',...,'az','ba','ca',...,'za', 和'aa', 总共可以产生51个小册子。


*/
