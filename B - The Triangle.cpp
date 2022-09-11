#include<iostream>
#include<math.h>
using namespace std;
int n;
const int MAX=102;
int map[MAX][MAX];//={0}
int maxMap[MAX][MAX];//第 i行第j个的最大值  maxMap[i][j]=max(maxMap[i-1][j-1],max[i-1][j])+map[i][j] 
int main(){
	scanf("%d",&n);
	int t;
	for(int i=1;i<=n;++i){// i 和 j 从1开始，是为了给 i-1,j-1留下空位，值位0 
		for(int j=1;j<=i;++j){
			scanf("%d",&map[i][j]);
			maxMap[i][j]=max(maxMap[i-1][j-1],maxMap[i-1][j])+map[i][j];
		}
	}
	//扫描最后一行 找到最大值
	int maxnum=maxMap[n][1];
	for(int i=2;i<=n;++i){
		if(maxMap[n][i]>maxnum)maxnum=maxMap[n][i];
	} 
	printf("%d\n",maxnum);
	
	return 0;
} 
