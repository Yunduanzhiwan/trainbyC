//////#include<stdio.h>
//////int main()
//////{
//////	int N��
//////	int i,j;
//////	int s[100001]={0};
//////	
//////	scanf("%d",&N);
//////	s[0]=s[1]=1;  //1������������0���������� �˴����⴦��0��1��
//////	
//////	
//////	for(i=2;i<N;i++)
//////         {
//////       //  	printf("i= %d ",i);
//////         	/*if(s[i]==0)*/
//////               for(j=2;i*j<=N;j++) 
//////                 {
//////                 	   s[i*j]=1;  //ɸ����������
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
////vector<int> sieve(int n); //��������,��n���ڵ�����
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
/////* ����������д�� */
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
////ɸ����[a,b)��������is_prime[i-a]=flase��ʾiΪ������i-aΪƫ��ֵ
//vector<int> segementSieve(long long a,long long b)
//{
//	vector<int> res;
//    for(long long i=2;i*i<b;i++)
//    {
//        if(!is_prime_small[i])//Ϊ0��i������
//        {
//        //����ɸ��[1,sqrt(b))������
//            for(long long j=2*i;j*j<b;j+=i)
//                is_prime_small[j]=true;
//        //ͬʱɸ[a,b)������
//        /*(a+i-1)/i :��ʼjΪ��ӽ�a��i�ı������������i��������
//        ��������iҲ��ɸ����*/
//            for(long long j=max(2ll,(a+i-1)/i)*i;j<b;j+=i)
//            //j-a��ƫ��������ʾa��j�ľ���
//                is_prime[j-a]=true;
//        }
//    }
//    //ͳ����������
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
//        //ÿ�����ʼ��
//        a=0;
//        memset(prime,0,sizeof(prime));
//        memset(is_prime,0,sizeof(is_prime));
//        memset(is_prime_small,0,sizeof(is_prime_small));
//        p=0;
//        //��һ���if�жϺܹؼ���ȱ�ٵĻ������
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
