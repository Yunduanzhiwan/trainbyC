#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n)
{	//返回1表示判断为质数，0为非质数，在此没有进行输入异常检测
	float n_sqrt;
	if(n==2 || n==3) return 1;
	if(n%6!=1 && n%6!=5) return 0;
	n_sqrt=floor(sqrt((float)n));
	for(int i=5;i<=n_sqrt;i+=6)
	{
	    if(n%(i)==0 | n%(i+2)==0) return 0;
	}
        return 1;
}
int main(){
	int size;
	cin>>size;
	long long n;
	for(int x=0;x<size;++x){
		cin>>n;
		int res=isPrime(n);
		if(res){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
//		int flag=1;
//			cin>>n;
//			for(int i=2;i<sqrt(n);++i){
//				if(n%i==0){
//					flag=0;
//					cout<<"NO\n";
//					break;         
//				}
//			}
//			if(flag){
//				cout<<"YES\n";
//			}
	}
	
	return 0;
}
