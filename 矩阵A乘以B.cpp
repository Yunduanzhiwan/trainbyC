
/*
L1-8 矩阵A乘以B (15 分)
给定两个矩阵A和B，要求你计算它们的乘积矩阵AB。需要注意的是，
只有规模匹配的矩阵才可以相乘。即若A有R
?a
?? 行、C
?a
?? 列，B有R
?b
?? 行、C
?b
?? 列，则只有C
?a
?? 与R
?b
?? 相等时，两个矩阵才能相乘。

输入格式：
输入先后给出两个矩阵A和B。对于每个矩阵，首先在一行中给出其行数R和列数C，随后R行，每行给出C个整数，以1个空格分隔，且行首尾没有多余的空格。输入保证两个矩阵的R和C都是正数，并且所有整数的绝对值不超过100。

输出格式：
若输入的两个矩阵的规模是匹配的，则按照输入的格式输出乘积矩阵AB，否则输出Error: Ca != Rb，其中Ca是A的列数，Rb是B的行数。

输入样例1：
2 3
1 2 3
4 5 6
3 4
7 8 9 0
-1 -2 -3 -4
5 6 7 8
输出样例1：
2 4
20 22 24 16
53 58 63 28
输入样例2：
3 2
38 26
43 -5
0 17
3 2
-11 57
99 68
81 72
输出样例2：
Error: 2 != 3
*/ 
#include<iostream>
using namespace std;
const int MAX=101;
int map1[MAX][MAX];
int map2[MAX][MAX];
 
int main(){
	int ca,ra,cb,rb;
	cin>>ra>>ca; 
	for(int i=0;i<ra;++i){
		for(int j=0;j<ca;++j){
			cin>>map1[i][j];
		}
	}
	
	cin>>rb>>cb; 
	for(int i=0;i<rb;++i){
		for(int j=0;j<cb;++j){
			cin>>map2[i][j];
		}
	}
	//不符合条件直接结束 
	if(ca!=rb){ 
		cout<<"Error: "<<ca<<" != "<<rb<<endl;
		exit(0);
	}
	
	//符合条件 
    cout<<ra<<" "<<cb<<endl;
    int sum,flag;
	for(int i=0;i<ra;++i){
        flag=1;//用于判断第一行的第一个输出，避免最后输出后有空格 
		for(int j=0;j<cb;++j){
			 sum=0;
			for(int x=0;x<ca;++x){
				sum+=map1[i][x]*map2[x][j];
			}
            if(flag){
                cout<<sum;
                flag=0;
            }else{
                cout<<" "<<sum;
            }
			
		}
		cout<<endl;
	}
	return 0;
} 
