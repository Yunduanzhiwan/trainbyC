/*
链接：https://pintia.cn/problem-sets/434/problems/5891 
假设以S和X分别表示入栈和出栈操作。如果根据一个仅由S和X构成的序列，
对一个空堆栈进行操作，相应操作均可行（如没有出现删除时栈空）且最后状态也是栈空，
则称该序列是合法的堆栈操作序列。请编写程序，输入S和X序列，判断该序列是否合法。

输入格式:
输入第一行给出两个正整数N和M，其中N是待测序列的个数，M（≤50）是堆栈的最大容量。
随后N行，每行中给出一个仅由S和X构成的序列。序列保证不为空，且长度不超过100。

输出格式:
对每个序列，在一行中输出YES如果该序列是合法的堆栈操作序列，或NO如果不是。

输入样例：
4 10
SSSXXSXXSX
SSSXXSXXS
SSSSSSSSSSXSSXXXXXXXXXXX
SSSXXSXXX
输出样例：
YES
NO
NO
NO


思路：本题不需要傻乎乎的模拟，直接用一个size 计数器就可以了，
只需要关注有没有出栈时为空，或者进栈时为满，就是进去后溢出（size>maxszie） 

*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m,size;
	cin>>n>>m;
	size=0;
	string str;
	int len;
	int flag=0;
	while(n--){
		cin>>str;//也可以不用字符串，用char[] 毕竟字符串就是char[]   ->char chs[n]   len=strlen(ch)
		len=str.length();
		flag=1;
		size=0;
		for(int i=0;i<len;++i){
			if(str[i]=='S'){//进栈 
				size++;
				if(size>m){//发现已经溢出，直接退出此次操作判断，必有问题 
					flag=0;
					break;
				}
			}
			else{
				if(size>=1){//出栈 栈里面需要至少还有一个，才能出 
					size--;
				}
				else{//否则直接退出 
					flag=0;
					break;
				}
			}
		}
		if(flag&&size==0){//最后符合要求的，必须操作没失误 --> flag==1，并且必须最后要栈为空  --> size==0 
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
} 
