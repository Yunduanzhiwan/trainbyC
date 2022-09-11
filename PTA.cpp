//////#include<stdio.h>
//////int main()
//////{
//////	int N；
//////	int i,j;
//////	int s[100001]={0};
//////	
//////	scanf("%d",&N);
//////	s[0]=s[1]=1;  //1代表不是质数，0代表是质数 此处特殊处理0和1。
//////	
//////	
//////	for(i=2;i<N;i++)
//////         {
//////       //  	printf("i= %d ",i);
//////         	/*if(s[i]==0)*/
//////               for(j=2;i*j<=N;j++) 
//////                 {
//////                 	   s[i*j]=1;  //筛法核心内容
//////				 }
//////		 }
//////        for(i=0;i<=N;i++)
//////        {
//////        	if(s[i]==0)
//////        	printf("%d\n",i);
//////		}
//////		return 0;
//////}
////
////#include <iostream>
////#include <vector>
////using namespace std;
////
////vector<int> sieve(int n); //函数声明,求n以内的质数
////
////int main(int argc, char const *argv[])
////{
////    int n;
////    cin >> n;
////
////    vector<int> ans = sieve(n);
////
////    cout << ans.size() << endl;
////    for (int i = 0; i < ans.size(); i++) {
////        cout << ans[i];
////        if (i < ans.size() - 1)cout << " ";
////    }
////    cout << endl;
////
////    return 0;
////}
////
/////* 请在这里填写答案 */
////
////
////vector<int> sieve(int n){
////    vector<int> res;
////    int *s=new int[n+3]{0};
//////    for(int i=0;i<=n;++i){
//////    	s[i]=0;
//////	}
////    s[0]=s[1]=1;
////    for(int i=2;i<n;++i){
////    //	s[i]=0;
////    	for(int j=2;i*j<=n;++j){
////    		s[i*j]=1;
////		}
////	}
////	for(int i=1;i<=n;++i){
////		if(s[i]==0){
////			res.push_back(i);
////		}
////	}    
////    delete s;
////    //cout<<"size ="<<res.size();
////	 return res;
////}
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//#define Max 100000003
//bool is_prime[Max];
//bool is_prime_small[Max];
//long long prime[Max];
//long long p=0;
////筛区间[a,b)的整数，is_prime[i-a]=flase表示i为素数，i-a为偏移值
//vector<int> segementSieve(long long a,long long b)
//{
//	vector<int> res;
//    for(long long i=2;i*i<b;i++)
//    {
//        if(!is_prime_small[i])//为0则i是质数
//        {
//        //埃氏筛求[1,sqrt(b))的质数
//            for(long long j=2*i;j*j<b;j+=i)
//                is_prime_small[j]=true;
//        //同时筛[a,b)的质数
//        /*(a+i-1)/i :开始j为最接近a的i的倍数。且最低是i的两倍，
//        否则素数i也被筛掉了*/
//            for(long long j=max(2ll,(a+i-1)/i)*i;j<b;j+=i)
//            //j-a是偏移量，表示a和j的距离
//                is_prime[j-a]=true;
//        }
//    }
//    //统计质数个数
//        for(long long i=0;i<b-a;i++)
//        	if(!is_prime[i]){
//        		cout<<"i+a "<<(i)<<" ";
//            	//cout<<(prime[p++]=i+a)<<" ";
//            	res.push_back((prime[p++]=i+a));
//			}
//       // cout<<endl;
//       return res;
//}
//int main()
//{
//    long long a,b;
//    long t1,t2;
//    
//    while(~scanf("%lld",&b))
//    {
//        //每次需初始化
//        a=0;
//        memset(prime,0,sizeof(prime));
//        memset(is_prime,0,sizeof(is_prime));
//        memset(is_prime_small,0,sizeof(is_prime_small));
//        p=0;
//        //这一块的if判断很关键，缺少的话会错误
//        if(a<=1)
//            is_prime[0]=true;
//        if(a==0)
//            is_prime[1]=true;
//        t1=clock();
//        vector<int> res=segementSieve(a,b);
//        
//		
//		cout<<"size= "<<res.size()<<endl;
//		for(int i=0;i<res.size();++i){
//			printf("%lld ",res[i]);
//		}
//		printf("\n");
//		t2=clock();
//        cout<<"time = "<<t2-t1<<"ms"<<endl;
//       // printf("%lld\n",p);
//    }
//    return 0;
//}


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	string s1;
	cin>>s1;
	cout<<"year:"<<s1.substr(0,4)<<endl;
	cout<<"department:"<<s1.substr(4,2)<<endl;
	cout<<"class:"<<s1.substr(6,2)<<endl;
	return 0;
}
