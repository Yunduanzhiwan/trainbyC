/*
L1-6 整除光棍 (20 分)
这里所谓的“光棍”，并不是指单身汪啦~ 说的是全部由1组成的数字，
比如1、11、111、1111等。传说任何一个光棍都能被一个不以5结尾的奇数整除。
比如，111111就可以被13整除。 现在，你的程序要读入一个整数x，
这个整数一定是奇数并且不以5结尾。然后，经过计算，输出两个数字：第一个数字s，
表示x乘以s是一个光棍，第二个数字n是这个光棍的位数。这样的解当然不是唯一的,
题目要求你输出最小的解。

提示：一个显然的办法是逐渐增加光棍的位数，直到可以整除x为止。但难点在于，
s可能是个非常大的数 —— 比如，程序输入31，那么就输出3584229390681和15，
因为31乘以3584229390681的结果是111111111111111，一共15个1。

输入格式：
输入在一行中给出一个不以5结尾的正奇数x（<1000）。

输出格式：
在一行中输出相应的最小的s和n，其间以1个空格分隔。

输入样例：
31
输出样例：
3584229390681 15
*/
#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;

/*
直接除可能太大不够除，
解决办法，模拟现实除法步骤   从头开始除，位数不够则加一，（余数加1位，不是结果加1）
 

*/ 
int main(){

	int n;
	cin>>n;
	ll fenzi=1;//让光棍数 从1 开始，如果它除以n余数为0（整除）就结束，，否则，光棍数加1继续 直到可以整除n为止
	ll shang, yu;//商和余数 
	int num=1;//计数器，计数光棍位数 
	bool bo=false; //以防出现不够除，补0的情况 
	while(1){
		shang=fenzi/n;
		yu=fenzi%n;
		if(bo||shang){
			bo=true;//已经有了，0也要输出 
			cout<<shang;
//			cout<<" xxx "<<endl; 
		}
		if(yu==0){//整除了 
			cout<<" "<<num<<endl;
			break;
		}
		num++;
		fenzi=yu*10+1;
	}
	
	return 0;
}

