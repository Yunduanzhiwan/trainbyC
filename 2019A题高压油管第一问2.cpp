#include<iostream>
#include<math.h>
#include<fstream>
#include<ostream>
#include<stdlib.h>
using namespace std;

double pi=3.1415926;
double S=pi*5*5;
double L=500;

double p0=100;
double r0=0.85;
double v0=S*L;
double m0=r0*v0;


double r160=0.868705986;
double p1=160;

double *Px=new double[10000004];
double *Rx=new double[10000004];
int index=0;
double getQ(double P,double p){
	double c=0.85;
	return  c*pi*0.7*0.7*sqrt(2*fabs(160-P)/p);
}
double GetP2(double p){//给出密度求压强
 return 20289.19276072*p*p-31614.98423835*p +12315.37676421-1.6;
}
void  toin(double t,double T){//T时刻的单位进油，对高压油管的影响，质量，压强等 
	//T时刻是否进油，
//		cout<<"inp= "<<P0<<endl;
		double tt=fmod(T,(t+10));
	if(0<tt&&tt<=t){
//		cout<<"fmod(T,(t+10))="<<tt<<endl;
		double q=getQ(p0,r0);
		
		
		//更新质量
		m0=m0+q*r160*0.01;
		//更新密度
		r0=m0/v0;
		//更新压强
		p0=GetP2(r0); 
	//	cout<<"pin"<<p0<<endl; 
		
	}
	
}
void toout(double st,double T){
	//出油
	double q=0;
	 double t=fmod(T,100);
//	 cout<<"t="<<t<<endl;//
	  if(st<t&&t<=st+0.2){
//	  	cout<<"f="<<100*(t-st)<<endl;
	  	 q=100*(t-st);
	  	 q=q*0.01*r0;
	  	 //更新质量
		m0=m0-q;
		//更新密度
		r0=m0/v0;
		//更新压强
		p0=GetP2(r0); 
		
	  	 
	  }else if(st+0.2<t&&t<=st+2.2){
//	  	cout<<"f=20\n";
	  	q=20;
	  	q=q*0.01*r0;
	  	 //更新质量
		m0=m0-q;
		//更新密度
		r0=m0/v0;
		//更新压强
		p0=GetP2(r0); 
		
	  }else if(st+2.2<t&&t<=st+2.4){
//	  	cout<<"f="<<(-100*(t-st)+240);
	  	q=fmod((-100*(t-st)+240),100);
	  	q=q*0.01*r0;
	  	 //更新质量
		m0=m0-q;
		//更新密度
		r0=m0/v0;
		//更新压强
		p0=GetP2(r0); 
		
	  }
	 // cout<<"pou"<<p0<<endl; 
}
void test(){
	double t=0.288;
	double T=0;
	double st=55.6;
	while(T<2000){
		toin(t,T);
		toout(st,T);
		Px[index]=p0;
		Rx[index]=r0;
		index++; 
		T=T+0.01;
//		cout<<"T="<<T<<endl;
	}
	ofstream of;
	of.open("mydata2.cvs",ios::out);
	for(int i=0;i<index;++i){
		of<<Rx[i]<<endl;//;<<","<<Rx[i]<<endl;
	}
	cout<<"index="<<index<<endl;
	delete []Px;
	delete []Rx;
	of.close();
}


void test2(double t){
	
	//double t=0.287;
	double T=0;
	double st=55.6;
	while(T<2000){
		toin(t,T);
		toout(st,T);
		
		if(p0>=150){
			cout<<"p0="<<p0;
			cout<<" t="<<t<<" T="<<T<<endl;
			break;
		} 
		if(p0<94){
			break;
		}
		
		T+=0.01;
	}
	
	
}

double tt=0;
double tT=0;
bool istrue;
void test3(double t,double Tend,string to){
	bool falg=false;
	 index=0;
	double T=0;
	double st=55.6;

	while(T<Tend){
		toin(t,T);
		toout(st,T);
		Px[index++]=p0;
		T=T+0.01;
		if(p0>=150){
			if(falg==false){
				tt=t;
				tT=T;
//				cout<<"t="<<t<<" T="<<T; 
//				cout<<"p0="<<p0<<endl;
			}
			t=0.69; 
			falg=true; 
		}
	}
//	cout<<"t="<<t<<" T="<<T; 
//	cout<<"p0="<<p0<<endl;
//	cout<<"flag="<<falg<<endl;
	if(falg){
		cout<<"t="<<tt<<" T="<<tT; 
		cout<<"p0="<<p0<<endl;
		
		
		cout<<"toke1= "<<to<<endl; 
//		ofstream of;
//		of.open(to+".xls",ios::out);
//		for(int i=0;i<index;++i){
//			//1.输出压力 
//			of<<Px[i]<<endl;
//			//2输出密度 
//			//of<<Rx[i]<<endl;
//		}
	//	cout<<"index="<<index<<endl;
		delete []Px;
		delete []Rx;
//		of.close();			
		istrue=true;
	}
	
	//cout<<"\n--------------------------------------------\n"<<endl;
}
int main(){
	
	cout<<m0<<endl;
	
//	double at[]={2000,5000,10000};
//	string to="mydata"; 
//
//		istrue=false;
//		cout<<"toke="<<to+to_string(1)<<endl; 
//		for(double i=0;i<=1;i=i+0.01){
//		 pi=3.1415926;
//		 S=pi*5*5;
//		 L=500;
//		
//		 p0=100;
//		 r0=0.85;
//		 v0=S*L;
//		 m0=r0*v0;
//		
//		 r160=0.868705986;
//		 p1=160;
//		// cout<<"toke="<<to+to_string(k+1)<<endl; 
//		test3(i,at[1],to+to_string(2)); 
//			if(istrue){
//				
//				exit(0);
//			}
//		}
//	
//	
////test3(0.7,7000);
//	delete []Px;
//	delete []Rx;
	return 0;
} 
