///*
//nֻ������ÿ��1cm���ٶ��ڳ�ΪLcm�ĸ��������С�
//�������������ӵĶ˵�ʱ�ͻ���䡣���ڸ���̫ϸ��
//��ֻ��������ʱ�����ǲ��ܽ���ͨ����ֻ�ܸ��Է�������ȥ��
//����ÿֻ���ϣ�����֪�������������˵ľ���xi������֪������ǰ�ĳ���
//��������������У������������¸�����������ʱ����ʱ�䡣
//
//*/
//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int n,l;
//
//class Ant{
//	public:
//		int z;//���꣬������� 
//		int f;//����  -1��1�� 
//		bool operator<(const Ant& a){
//			return z<a.z;
//		}
//};
//int main(){
//	cin>>n>>l;
//	Ant ants[n];
//	
//	for(int i=0;i<n;++i){
//		cin>>ants[i].z;
//		ants[i].f=((i-n/2)>=0?1:-1);
//	}
//	sort(ants,ants+n);
//	
//	if(n%2==0){
//		cout<<(max(min(ants[n/2].z,l-ants[n/2].z),min(ants[n/2+1].z,l-ants[n/2+1].z)));
//	}else{
//		cout<<min(ants[n/2].z,l-ants[n/2].z);
//	}
//	
//	//�
//	int nums=n;
//	double time=0;
//	while(nums--){
//		
//		
//		
//	}
//	
//	 
//	
//	
//	return 0;
//}

#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);//ȥ���� 
	int n,l;
	cin>>n>>l;
	int t;//���� 
	int minl=-1;
	int maxl=-1;
	for(int i=0;i<n;++i){
		cin>>t;
		//ȫ����ȥ��ÿ��ѡ����ӽ��˵�һ�� 
		minl=max(minl,min(t,l-t));
		//ÿ��ѡ����Զ��� 
		maxl=max(maxl,max(t,l-t));
		
	}
	 cout<<minl<<" "<<maxl<<endl; 
	
	return 0;
}


//const int MAX_N=50005;
//int n,s;
//int Min,Max;
// 
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin>>n>>s;
//	for(int i=0,x;i<n;++i)
//	{
//		cin>>x;
//		
//		Min=max(Min,min(x,s-x));
//		Max=max(Max,max(x,s-x));
//	}
//	cout<<Min<<" "<<Max<<endl;
//	
//	return 0;
//}
