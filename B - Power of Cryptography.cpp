#include<iostream>
#include<math.h> 
using namespace std;
// cin n p   -> k   -> n^k=p pow(n,k)=p->pow(p,1/n)=k
int main(void){
		double n,p,k;
	while(cin>>n>>p){
		k=pow(p,1/n);
		cout<<k<<endl;
	} 
	
	
	return 0;
}
