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
	
	for(int i=0;i<n;++i){//ѡȡ��i�� 
		for(int j=1;j<=m;++j){//����������
			if(i==0){
				dp[i][j-1]=(weith[i]<j?val[i]:0);
			} else{
				if(weith[i]<j){//�����п���// 
				//��ǰ��Ʒ�Ų��£���ȥ�������һЩ�ܷ��£�0-m��  (�źͲ���֮��ȥ���)
				//��ǰ��Ʒ��֮ǰ�Ķ����Է���    // ֮ǰ�� dp[i-1][j-weith[i]]
					 dp[i][j-1]=max(dp[i-1][j-1],val[i]+dp[i-1][j-weith[i]]); 
					
				}else{	//��ǰ��Ʒ�ȱ����� 
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
////dp[N][W] ����װ��ǰ0 ~ N����Ʒ�е�ĳ������Ʒ�����������������ΪWʱ������ֵ
//
//int main(int argc, char const *argv[])
//{
//    int w[MAX_N], p[MAX_N];
//    //��������ֵ
//
//    ios::sync_with_stdio(false);
//
//    cin >> N >> W;
//
//    for(int i = 0; i < N; ++i)//����
//    {
//        cin >> w[i] >> p[i];
//    }
//	
//	////////////////////////////////////////////////////////////
//	//��ʼ������
//	//��Ȼ���Ǹ���ά���飬��̬ת�Ʒ����ǴӶ�ά����ĵ�һ�к͵�һ�������Ƶ�
//	//�ʹؼ������ڵ�һ�к͵�һ�еĺ����Լ���ʼ��
//	//dp[0][i]��ֻȡ��0������ʱ��������������Ϊi���������
//	//��Ȼ����i<w[0]��0������װ����ȥ���������Ϊ0
//	//��֮���������Ϊp[0]
//	//
//	//dp[i][0]����0 ~ i����Ʒ��ѡȡĳЩ��Ʒ������������Ϊ0ʱ�����ڵ��������
//	//��Ȼ�������⣬������Ʒ�����涼����0����û���κ�һ����Ʒ����װ�ý�ȥ
//	//��dp[i][0]=0
//	//��ʼ�����
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
//    for(int n = 1 ; n < N; ++n)//��ǰ0 ~ n����Ʒ��ѡȡ
//    {
//        for(int weight = 1; weight <= W; ++weight)
//        //ȡ�������������Ϊweight
//        {
//            if(weight - w[n] >= 0)
//                dp[n][weight] = max(dp[n-1][weight], dp[n-1][weight-w[n]]+p[n]);
//            else
//            //��weight - w[n] < 0
//            //˵�������������װ���µ�n����Ʒ
//            //�Ǿ�ֻ�ܲ�ȡ��n����Ʒ��
//                dp[n][weight] = dp[n-1][weight];
//        }
//    }
//
//    cout << dp[N-1][W] << endl;
//    //Ϊʲô���dp[N-1][W]��
//    //���ĺ����ǣ�ȡ0 ~ N-1����Ʒ��ѡȡ��Ʒ������������ΪW���������
//    //������������װ�µ��������
//    //�ʴ𰸾�����
//
//    return 0;
//}

