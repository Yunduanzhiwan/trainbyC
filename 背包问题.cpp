#include<iostream>
using namespace std;
#define maxi 101
#define maxj 100
int dp[maxi][maxj];
int weith[maxi];
int val[maxi];
int main(void){
	int n,m;
	cin>>n>>m;
	
	
	int w,v;
	for(int i=0;i<n;i++){
		cin>>w>>v;
		weith[i]=w;
		val[i]=v;
	}
	
	for(int i=0;i<maxi;++i){
		for(int j=0;j<maxj;++j){
			dp[i][j]=0;
		}
	}
	
	for(int i=0;i<n;++i){//选取第i件 
		for(int j=1;j<=m;++j){//背包的容量
			if(i==0){
				dp[i][j-1]=(weith[i]<j?val[i]:0);
			} else{
				if(weith[i]<j){//背包有空余// 
				//当前商品放不下，但去掉里面的一些能放下（0-m）  (放和不放之间去最大)
				//当前商品和之前的都可以放下    // 之前的 dp[i-1][j-weith[i]]
					 dp[i][j-1]=max(dp[i-1][j-1],val[i]+dp[i-1][j-weith[i]]); 
					
				}else{	//当前商品比背包大， 
					dp[i][j-1]=dp[i-1][j-1];
				}
				
				
			}
			
		} 
	}
	cout<<"max= "<<dp[n-1][m-1]<<endl;
	
} 


//#include <iostream>
//#include <algorithm>
//#define MAX_N 101
//#define MAX_W 10001
//
//using namespace std;
//
//int N=0, W=0, Max=0;
//int dp[MAX_N][MAX_W];
////dp[N][W] 背包装入前0 ~ N号物品中的某几个物品，包可容纳最大重量为W时的最大价值
//
//int main(int argc, char const *argv[])
//{
//    int w[MAX_N], p[MAX_N];
//    //重量，价值
//
//    ios::sync_with_stdio(false);
//
//    cin >> N >> W;
//
//    for(int i = 0; i < N; ++i)//输入
//    {
//        cin >> w[i] >> p[i];
//    }
//	
//	////////////////////////////////////////////////////////////
//	//初始条件：
//	//显然这是个二维数组，动态转移方程是从二维数组的第一行和第一列往后推的
//	//故关键就在于第一行和第一列的含义以及初始化
//	//dp[0][i]：只取第0号物体时，包可容纳重量为i的最大利益
//	//显然，若i<w[0]，0号物体装不进去，最大利益为0
//	//反之，最大利益为p[0]
//	//
//	//dp[i][0]：从0 ~ i号物品中选取某些物品，可容纳重量为0时，包内的最大利益
//	//显然根据题意，所有物品的利益都大于0，故没有任何一个物品可以装得进去
//	//故dp[i][0]=0
//	//初始化完毕
//	////////////////////////////////////////////////////////////
//    for(int i = 0; i <= W; ++i)
//    {
//        if(i >= w[0])
//            dp[0][i] = p[0];
//        else
//            dp[0][i] = 0;
//    }
//
//    for(int i = 0; i < N; ++i)
//        dp[i][0]=0;
//
//    for(int n = 1 ; n < N; ++n)//从前0 ~ n号物品中选取
//    {
//        for(int weight = 1; weight <= W; ++weight)
//        //取的物体的总重量为weight
//        {
//            if(weight - w[n] >= 0)
//                dp[n][weight] = max(dp[n-1][weight], dp[n-1][weight-w[n]]+p[n]);
//            else
//            //若weight - w[n] < 0
//            //说明这个包的容量装不下第n号物品
//            //那就只能不取第n号物品了
//                dp[n][weight] = dp[n-1][weight];
//        }
//    }
//
//    cout << dp[N-1][W] << endl;
//    //为什么输出dp[N-1][W]？
//    //它的含义是：取0 ~ N-1号物品中选取物品，可容纳质量为W，最大利益
//    //这就是这个包能装下的最大利益
//    //故答案就是它
//
//    return 0;
//}

