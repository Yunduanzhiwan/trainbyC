#include<iostream>
#include<cmath>
#include<string>
#include<time.h>
using namespace std;

#define t 1000000
long long  nums[t];
int n,a,d;

void init(){
	long long i=0;
	nums[0]=0;
	nums[1]=1;
	for(i=2;i<t;++i){
		nums[i]=nums[i-1]+nums[i-2];
	}
	
	
}

//void init(){
//	long long i=0;
//	nums[0]="0";
//	nums[1]="1";
//	for(i=2;i<=20;++i){
//		string an=nums[i-2];
//		string bn=nums[i-1];
//		
//		
////		cout<<"an="<<an<<" bn="<<bn<<endl;
//		int la=an.length();
//		int lb=bn.length();
//
//
//    	1234
//    	  12
//		""12
////		cout<<"la="<<la<<" "<<lb<<endl;
//		
//		int chex=(la>=lb)?1:0;
//
//		
//		int j=(chex==1)?la-lb:lb-la;
//
//		string newn="";
//		for(int k=0;k<j;++k){
//			if((( an[j]-'0' )+( bn[j]-'0' ))<=9){
//				
//				newn+=(  ( ( an[j]-'0' )+( bn[j]-'0' ) )+'0');
//			}else{
//				newn+=(  ( ( an[j]-'0' )+( bn[j]-'0' ) )+'0');
//				
//			}
//		
//		}
//		
////		if(la>lb){
////			for(j=la-1;j>lb-1;--j){
////				newn+=(an[j]);
////			}
////		}else if(la<lb){
////			for(j=lb-1;j>la-1;--j){
////				newn+=(bn[j]);
////			}
////		}
//		
//		nums[i]=newn;
//		cout<<nums[i]<<endl;
//	}
//}

bool isOk(long b,long e){
	int numt=0;
	bool ishas=false;
	for(int i=0;i<n;++i){
		int tn=nums[b+i*e];
		ishas=false;
		while(tn&&numt<18){
			if(( a+i*d )== (tn%10) ){
				ishas=true;
				break; 
			}
			tn/=10;
			++numt;
			
		}
		if(!ishas){
			return false;
		}
//		else{
//		//	cout<<"nums[]="<<nums[b+i*e]<<" a+id="<<a+i*d<<endl;
//		}
		
	}
	
	return true;
}
int main(){

	
	cin>>n>>a>>d;
	
	clock_t start,end;
	start=clock();
	
	init();
	
	long  b,e;
	
	 long maxE=pow(2,10);
	
	for(b=1;b<t;++b){
		for(e=1;e<t;++e){
			if(isOk(b,e)){
				cout<<b<<" "<<e<<endl;
				end=clock();
				cout<<end-start<<endl;
				return 0;
			}
			
		}
	}
//	for(int i=0;i<50;++i){
//		cout<<nums[i]<<endl;
//	}
	cout<<"-1"<<endl;
	
	
	end=clock();
	cout<<end-start<<endl;
	return 0;
} 
