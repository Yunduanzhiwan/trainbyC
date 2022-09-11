///*
//n只蚂蚁以每秒1cm的速度在长为Lcm的竿子上爬行。
//当蚂蚁爬到竿子的端点时就会掉落。由于竿子太细，
//两只蚂蚁相遇时，它们不能交错通过，只能各自反向爬回去。
//对于每只蚂蚁，我们知道它距离竿子左端的距离xi，但不知道它当前的朝向。
//请计算各种情况当中，所有蚂蚁落下竿子所需的最短时间和最长时间。
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
//		int z;//坐标，距离左端 
//		int f;//方向  -1左，1右 
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
//	//最长
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
	ios::sync_with_stdio(false);//去缓存 
	int n,l;
	cin>>n>>l;
	int t;//坐标 
	int minl=-1;
	int maxl=-1;
	for(int i=0;i<n;++i){
		cin>>t;
		//全部下去，每个选择最接近端的一个 
		minl=max(minl,min(t,l-t));
		//每个选择最远离端 
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
