#include<iostream>
#include<string.h>
using namespace std;
static const int MMAX = 20;   //N��Ӳ�ҵ���ֵ
static const int NMAX = 50000;   //���M�����Ž�
int dp[MMAX+1][NMAX+1]={0};
int x[22]; 
static const int INFITY = (1 << 20);//����һ�����޴��ֵ����������ĳ�ʼ��
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
//static const int MMAX = 20;   //N��Ӳ�ҵ���ֵ
//static const int NMAX = 50000;   //���M�����Ž�
//static const int INFITY = (1 << 20);//����һ�����޴��ֵ����������ĳ�ʼ��
//
//
//int dp[MMAX + 1][NMAX + 1] = { 0 };//����������СӦ��Ϊ
//int C[25];
//void solve(int n, int m)
//{
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			if (j <C[i])   dp[i][j] = dp[i - 1][j]; //�����е�ֵС��Ӳ�ҵ���ֵʱ�����ʱֻ�ܲ�ѡ��Ӳ��
//			else           dp[i][j] = min(dp[i - 1][j], dp[i][j - C[i]] + 1); //��ʹ�� ��i��Ӳ�ҡ��͡���ʹ�õ�i��Ӳ�С�
//		}
//
//	cout << dp[n][m] << endl;  //��ӡ���Ž�
//}
//int main(void)
//{
//	
//	//cout<<"INFITY "<<INFITY<<endl;
//	int n, m;
//	cin >> m >> n;
//		for (int i = 0; i <= m; i++) dp[0][i] = INFITY; //��ʼ��
//	for (int i = 0; i <= n; i++)     dp[i][0] = 0;     //��ʼ��
//
//
//	for (int i = 1; i <= n; i++)
//		cin >> C[i];     //����n��Ӳ�ҵ���ֵ
//
//	solve(n, m);//��̬�滮���
//
//	return 0;
//}
//
////��������ӣ�https://vjudge.net/problem/Aizu-DPL_1_A
