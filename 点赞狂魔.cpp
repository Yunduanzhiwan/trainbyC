
/*
L2-1 点赞狂魔 (25 分)
微博上有个“点赞”功能，你可以为你喜欢的博文点个赞表示支持。每篇博文都有一些刻画其特性的标签，而你点赞的博文的类型，也间接刻画了你的特性。然而有这么一种人，他们会通过给自己看到的一切内容点赞来狂刷存在感，这种人就被称为“点赞狂魔”。他们点赞的标签非常分散，无法体现出明显的特性。本题就要求你写个程序，通过统计每个人点赞的不同标签的数量，找出前3名点赞狂魔。

输入格式：
输入在第一行给出一个正整数N（≤100），是待统计的用户数。随后N行，每行列出一位用户的点赞标签。格式为“Name K F
?1
?? ?F
?K
?? ”，其中Name是不超过8个英文小写字母的非空用户名，1≤K≤1000，F
?i
?? （i=1,?,K）是特性标签的编号，我们将所有特性标签从 1 到 10
?7
??  编号。数字间以空格分隔。

输出格式：
统计每个人点赞的不同标签的数量，找出数量最大的前3名，在一行中顺序输出他们的用户名,其间以1个空格分隔,且行末不得有多余空格。如果有并列，则输出标签出现次数平均值最小的那个，题目保证这样的用户没有并列。若不足3人，则用-补齐缺失，例如mike jenny -就表示只有2人。

输入样例：
5
bob 11 101 102 103 104 105 106 107 108 108 107 107
peter 8 1 2 3 4 3 2 5 1
chris 12 1 2 3 4 5 6 7 8 9 1 2 3
john 10 8 7 6 5 4 3 2 1 7 5
jack 9 6 7 8 9 10 11 12 13 14
输出样例：
jack chris john
*/
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
struct Peo{//绑定名字，和标签，方便排序不乱 
	char chs[9];
	int sum;
	int num;
};
bool cmp(const Peo& a,const Peo& b){//采用 const 不可更改值，采用& 传地址，不用传参的多余对象，提高速度 
	if(a.sum==b.sum)
		return a.num<b.num;
	return a.sum>b.sum;
}
int main(){
	int n,b,t;
	scanf("%d",&n);
	Peo peo[n];
	
	set<int> se;//set 计数标签的种类数 总的点赞数-种数  可用做平均数看待，即种数相同，点赞数小的标签平均数小   
	for(int i=0;i<n;++i){
		se.clear();//清空 
		scanf("%s %d",&peo[i].chs,&b);
		peo[i].num=b;
		for(int j=0;j<b;++j){
			scanf("%d",&t);
			se.insert(t);
		}
		peo[i].sum=se.size();//种数 
	}
	sort(peo,peo+n,cmp);//排序，自定义规则 
	
	if(n>=3){//有3个人 
		printf("%s",peo[0].chs);
		for(int i=1;i<3;++i){
			printf(" %s",peo[i].chs);
		} 
	}
	else{//不够 
		int flag=1;//第一个输出，避免空格 
		if(n>=1){ 
			flag=0;
			printf("%s",peo[0].chs);//有一个 
			
			if(n>=2){//有两个 
				printf(" %s",peo[1].chs);
			}
		}
		
		for(int i=0;i<3-n;++i){//多少个缺失的？  3-n个 
			if(flag)
				printf("-");
			else
				printf(" -");
		} 
		printf("\n");//最后换行 
	}
	return 0;
} 
