#include<iostream>
#include<string.h>
using namespace std;
static const int MMAX = 20;   //N中硬币的面值
static const int NMAX = 50000;   //金额M的最优解
int dp[MMAX+1][NMAX+1]={0};
int x[22]; 
static const int INFITY = (1 << 20);//设置一个无限大的值，方便下面的初始化
int main(){
	int n,m;
	cin>>n>>m;

	
//	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;++i){
		dp[0][i]=INFITY;
	}
		
	
	for(int i=1;i<=m;++i){
		cin>>x[i];
		
	}
	
	for(int i=1;i<=m;++i){
		int xuan=x[i];
		for(int j=1;j<=n;++j){
			if(xuan>j){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]= min(dp[i-1][j-xuan]+1,dp[i-1][j]);
			}
		}
	}
//	for(int i=0;i<m;++i){
//		
//		for(int j=0;j<n;++j){
//		//	cout<<dp[i][j]<<" ";
//		printf("%3d",dp[i][j]);
//		}
//		cout<<endl;
//	} 
	cout<<dp[m][n]<<endl;
	
	return 0;
} 



//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//static const int MMAX = 20;   //N中硬币的面值
//static const int NMAX = 50000;   //金额M的最优解
//static const int INFITY = (1 << 20);//设置一个无限大的值，方便下面的初始化
//
//
//int dp[MMAX + 1][NMAX + 1] = { 0 };//这里的数组大小应该为
//int C[25];
//void solve(int n, int m)
//{
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			if (j <C[i])   dp[i][j] = dp[i - 1][j]; //当金市的值小于硬币的面值时，则此时只能不选次硬市
//			else           dp[i][j] = min(dp[i - 1][j], dp[i][j - C[i]] + 1); //“使用 第i种硬币”和“不使用第i种硬市”
//		}
//
//	cout << dp[n][m] << endl;  //打印最优解
//}
//int main(void)
//{
//	
//	//cout<<"INFITY "<<INFITY<<endl;
//	int n, m;
//	cin >> m >> n;
//		for (int i = 0; i <= m; i++) dp[0][i] = INFITY; //初始化
//	for (int i = 0; i <= n; i++)     dp[i][0] = 0;     //初始化
//
//
//	for (int i = 1; i <= n; i++)
//		cin >> C[i];     //输入n个硬币的面值
//
//	solve(n, m);//动态规划求解
//
//	return 0;
//}
//
////此题的链接：https://vjudge.net/problem/Aizu-DPL_1_A
