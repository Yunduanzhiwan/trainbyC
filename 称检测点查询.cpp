//#include<iostream>
//#include<math.h>
//using namespace std;
//#define INF 0x3f3f3f3f
//#define p(x) x*x
//int main(){
//	int n;
//	double x0,y0,m1,m2,m3,x,y;
//	cin>>n>>x0>>y0;
//	m1=m2=m3=INF;
//	int b1,b2,b3;
//	b1=b2=b3=-1;
//	double dic=0;
//	for(int i=1;i<=n;++i){
//	//	cout<<"i="<<i<<endl; 
//		cin>>x>>y;
//		dic=sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0));
//	//	cout<<"dic="<<dic<<endl;
//		if(dic<m3){
//		//	cout<<"b3--";
//			b1=b2;
//			m1=m2;
//			
//			b2=b3;
//			m2=m3;
//			
//			b3=i;
//			m3=dic;
//		}
//		else if(dic<m2){
//	//		cout<<"b2--";
//			b1=b2;
//			b1=m2;
//			b2=i;
//			m2=dic;
//		}else if(dic<m1){
//		//	cout<<"b1--";
//			m1=dic;
//			b1=i;
//		}
//	//	cout<<b3<<" "<<b2<<" "<<b1<<endl;
//	}
//	cout<<b3<<endl;
//	cout<<b2<<endl;
//	cout<<b1<<endl;
//	return 0;
//}

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
struct Node{
	int bh;
	double dic;
	bool operator <(const Node& a){
		if(a.dic>dic){
			return 1;
		}else{
			if(bh<a.bh){
				return 1;
			}
		}
		return 0;
	}
}num[203];
int main(){
	int n;
	double x0,y0,x,y;
	cin>>n>>x0>>y0;
	double dic=0;
	for(int i=1;i<=n;++i){
		cin>>x>>y;
		num[i].bh=i;
		num[i].dic=((x0-x)*(x0-x)+(y-y0)*(y-y0)); 
	}
	sort(num+1,num+n+1);
	
	for(int i=1;i<=3;++i){
		cout<<num[i].bh<<endl;
	}
	return 0;
}
