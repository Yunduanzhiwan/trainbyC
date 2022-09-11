#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define G5 sqrt(5)
double getFei(int n){
	if(n<2)
		return n==0?0:1;
	return getFei(n-1)+getFei(n-2);
//	return 1/G5*( pow((1+G5)/2,n)-pow( (1-G5)/2,n) );
	
}
int main(){

	for(int i=20;i<100;i++){
		cout<<std::fixed<<getFei(i)<<endl;
	}
	int n;
	while(1){
		
		cin>>n;
		
		
		n=getFei(n);
		//cout<<"n="<<n<<endl;
		if(n%3){
			cout<<"3"<<endl;
		}
		 if(n%4){
			cout<<"4"<<endl;
		}
		
		if(n>12&&n%12){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	} 


	return 0;
}
