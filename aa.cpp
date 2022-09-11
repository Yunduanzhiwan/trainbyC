#include<iostream>
using namespace std;
int n;
double getprice(int n){
	int res=1000000000000000; 
	if(n<=300){
			res=20;
		}else if(n<=350){
			res=23;
		}else if(n<=400){
			res=26;
		}else if(n<=450){
			res=29;
		}else if(n<=500){
			res=32;
		}else if(n<=600){
			res=37;
		}else if(n<=700){
			res=44;
		}else if(n<=800){
			res=50;
		}else if(n<=900){
			res=55;
		}else if(n<=1000){
			res=60;
		}else{
			res=(n-1000+99)/100*5+60;
		}
		return res;
}
int main(){
	int res=0;
	while(1){
		cin>>n;
		if(n<=300){
			res=20;
		}else if(n<=350){
			res=23;
		}else if(n<=400){
			res=26;
		}else if(n<=450){
			res=29;
		}else if(n<=500){
			res=32;
		}else if(n<=600){
			res=37;
		}else if(n<=700){
			res=44;
		}else if(n<=800){
			res=50;
		}else if(n<=900){
			res=55;
		}else if(n<=1000){
			res=60;
		}else{
			res=(n-1000+99)/100*5+60;
		}
		cout<<res<<endl;
	}
	
}
