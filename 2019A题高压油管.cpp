#include<iostream>
#include<math.h>
using namespace std;

double t=0.28;
double GetE(double P);
double getp(double P);

double GetP(double m);
double getQ(double P,double p);

double pi=3.14;
double S=pi*5*5;
double L=500;
 
double v0=S*L;
double P0=150;
double p0=getp(P0);
double m0=p0*v0;

 
double P1=160;
double p1=getp(P1);//密度 


double v1;
double m1;
double P2;//加油以后的压强
double p2;

double v2;
double m2;

//double v1=getQ(100,0.85)*t;
//double m1=p1*v1;
//double P2=GetP(m0+m1);//加油以后的压强
//double p2=getp(P2);
//
//double v2=44*(t+10)/100;
//double m2=p2*v2;

double minf=9999;
double mint=999;
void test(double t){
	 v1=getQ(100,getp(100))*t;
	 m1=p1*v1;
	 P2=GetP(m0+m1);//加油以后的压强
	 p2=getp(P2);
	 
	double p3=(m0+m1)/v0;
	double minp=9999;
	double mink=999;
	cout<<"p2="<<p2<<" p21="<<p3<<endl;
	
	 v2=44*(t+10)/100;
	 m2=p2*v2;	
	 cout<<"t="<<t<<" m1="<<m1<<" m2="<<m2<<endl;
	 double mymin=fabs(m1-m2);
	 if(minf>mymin){
	 	minf=mymin;
	 	mint=t;
	 }
}


double getp(double P){//给出压强返回密度 
double e=GetE(P);
	
//	return -(425*P*P+1559168)/(1200*P-1966080-500*P*P);
return -(0.85*e)/(P-100-e);
	
}


double GetP2(double p){//给出密度求压强
 return 20289.19276072*p*p-31614.98423835*p +12315.37676421;
//	double e=GetE(p);
//	return e*(p-0.85)/p+100;
}
double GetP(double m){//给出质量求压强
 return m*9.8;//
//	double e=GetE(p);
//	return e*(p-0.85)/p+100;
}
double getQ(double P,double p){
	double c=0.85;
	return  c*pi*0.7*0.7*sqrt(2*fabs(160-P)/p);
}

double GetE(double p){
	return 0.001*p*p*p-0.0011*p*p+5.4744*p+1531.8684;
}

double toin(double t,double T,double P0){
	//T时刻是否进油，
//		cout<<"inp= "<<P0<<endl;
	if(0<fmod(T,(t+10))<t){
		return getQ(P0,getp(160));
	} else{
		return 0;
	}
	
}
double toout(double st,double T){
	//出油
	 double t=fmod(T,100);
//	 cout<<"t="<<t<<endl;//
	  if(t==st){
	  	return 0;
	  }else if(st<t&&t<=st+0.2){
//	  	cout<<"f="<<100*(t-st)<<endl;
	  	return 100*(t-st);
	  }else if(st+0.2<t&&t<=st+2.2){
//	  	cout<<"f=20\n";
	  	return 20;
	  }else if(st+2.2<t&&t<=st+2.4){
//	  	cout<<"f="<<(-100*(t-st)+240);
	  	return	fmod((-100*(t-st)+240),100);
	  }
	  return 0;
}
void test1(){
	double start;
	double T;
	double t=0.288;
		double sum;
	cout<<"p= "<<P0<<endl;
	double mymin=0x3f3f3f3f;
	cout<<mymin<<endl;
	double ix=0;
	for(start=0;start<97.6;start=start+0.1){
		 sum=0;
	 	P0=100;
		m0=0.85*v0;
		cout<<"sum="<<sum<<endl;
		for(T=0;T<2000;T=T+0.01){
		//	cout<<" p= "<<P0<<endl;
			double in=toin(t,T,P0)*0.01*p1;
			if(in>0){
				
				m0=m0+in;
				p0=m0/v0;
				P0=GetP2(p0);
		//	cout<<" in= "<<in<<endl;
				sum=sum+fabs(P0-100);
			}
			
			double ou=toout(start,T)*0.01*p0;
			
			if(ou>=0){
		//		cout<<"ou= "<<ou<<endl;
				m0=m0-ou;
				p0=m0/v0;
				P0=GetP2(p0);
			//	cout<<" p0="<<P0<<endl;
				sum=sum+fabs(P0-100);
			}
			
			
			
		//	cout<<" oup= "<<P0<<endl;
//			in=in*getp(160);//密度*体积
//			m0=m0+in-ou;//更新质量 
//			cout<<"in-ou "<<in-ou;
//			P0=GetP2(m0/v0);
//			cout<<" t= "<<start<<" T= "<<T;
			
			
		}
		cout<<"ix="<<ix<<" sum="<<sum<<endl;
		if(sum<mymin){
				mymin=sum;
				ix=start;
		}
	}
	cout<<"ix="<<ix;
	
	
}


void test2(){
	
	double start=56.2;
	double T=0;
	double t=0.288;
	double sum;
//	cout<<"p= "<<P0<<endl;
	double mymin=0x3f3f3f3f;

	double ix=0;	
	double *Pt=new double[2000000];
	while(T<2000){
		double in=toin(t,T,P0);
		in=in*p1*0.01;
		m0+=in;
		
		
		
	}
	
}

void test4(){
	double T=0;
	
	
	
	while(T<1000){
		//1.获得T时刻 高压油泵 的质量，体积，密度，压强
		mg=
		vg=
		rg=mg/vg;
		pg=GetP2(rp);
		
		
		//2.获取 T时刻，高压油管的压强
		
		
		
		if(pg>p0){
			//进油,更新高压油泵，油管的  质量，体积，密度，压强 
			
			
		} 
		
		
		//3.判断当前时刻是否要出油，如果出，则出油，并更新 油管的  质量，体积，密度，压强 
		 
		
		
	
	
	
	
		T=T=0.01;
	}
	
	
	
	
} 

int main(){
//	cout<<GetP2(0.85);
//	test1();

//	double t=0;
//	for(double t=0;t<0.5;t=t+0.0001){
//		
//		test1(t);
//		
//	}
//	cout<<"mint="<<mint<<endl;
//	test(mint);
//	cout<<getp(100);





	return 0;
} 
