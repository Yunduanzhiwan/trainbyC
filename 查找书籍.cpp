//给定n本书的名称和定价，本题要求编写程序，查找并输出其中定价最高和最低的书的名称和定价。
//输入格式:
//
//输入第一行给出正整数n（<10），随后给出n本书的信息。每本书在一行中给出书名，即长度不超过30的字符串，随后一行中给出正实数价格。题目保证没有同样价格的书。
//输出格式:
//
//在一行中按照“价格, 书名”的格式先后输出价格最高和最低的书。价格保留2位小数。
//输入样例:
//
//3
//Programming in C
//21.5
//Programming in VB
//18.5
//Programming in Delphi
//25.0
//
//输出样例:
//
//25.00, Programming in Delphi
//18.50, Programming in VB


#include<stdio.h>
#include<string.h>
struct Book{
    char name[31];
    double price;
}bs[10];
int main(void){
    int n;
    scanf("%d",&n);
    int max=0;
    int min=0;
    int num=0;
    int num1=0;
    for(int i=0;i<n;i++){
    	scanf("\n");
     gets(bs[i].name);

		scanf("%lf",&bs[i].price);
		if(i==0){
			min=bs[i].price;
		}
		
		if(bs[i].price>max){
			max=bs[i].price;
			num=i;
		}
		else if(bs[i].price<min){
			min=bs[i].price;
			num1=i;
		}
    }
    printf("%.2lf, %s\n",bs[num].price,bs[num].name);
    printf("%.2lf, %s\n",bs[num1].price,bs[num1].name);
    return 0;
}
