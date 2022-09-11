#include<iostream>
#include<math.h>
#include<fstream>
#include<ostream>
#include<stdlib.h>
using namespace std;
double getp(double P);
double pi=3.1415926;
double S=pi*5*5;
double L=500;

//��ѹ�ͱõĳ�ʼֵ�� 
double	vg=43.6896;
double	pg=0.5;
double	rg=getp(pg);
double	mg=rg*vg;
double Sg=5*5*pi; 

double p0=100;
double r0=0.85;
double v0=S*L;
double m0=r0*v0;

double *Px=new double[10000004];
double *Rx=new double[10000004];
//���Ŀ���ѹǿ
//�����죬������
double Sw;//

double pw=0.1013;//ѹǿ 
double ce=7.8922;

double r160=0.868705986;
double p1=160;

int index=0;
double GetE(double p){
	return 0.001*p*p*p-0.0011*p*p+5.4744*p+1531.8684;
}
double getp(double P){//����ѹǿ�����ܶ� 
double e=GetE(P);
	
//	return -(425*P*P+1559168)/(1200*P-1966080-500*P*P);
return -(0.85*e)/(P-100-e);
	
}

double getwh(double T){
	T=fmod(T,100);
	if(T==0){
		return 0;
	}
	if(T<=0.44){
		return 2.016*exp(-1* pow((T-0.4551)/0.1661,2));
	}else if(T<=2) {
		return 2;
	}else if(T<=2.45){
		return 2.017*exp(-1*pow((T-0.1994)/0.1661,2));
	}else if(T<=100){
		return 0;
	}
}

double getS(double T){
	double h=getwh(T);
	if(h==0){
		return 0;
	}
	if(h>0&&h<=1.1554){
		return ( pow(((h+ce)*tan(9*pi/180)),2)-pow(1.25,2))*pi;
	}else if(h>1.554){
		return 0.7*0.7*pi; 
	}
}

double getih(double T,double jsv){
	return 4.826+2.413*cos((jsv*T+pi))-2.676*pow(10,-6)*sin((jsv*T+pi));
}
double getV(double T,double jsv){
	double ih=getih(T,jsv);
//	cout<<"ih"<<ih<<endl;
	//20+ (7.239-ih)*(2.5)^2*pi;
	return 20+(7.239-ih)*pow(1.25,2)*pi;
} 

double getQ(double P1,double r1,double p2,double S){//��ѹ-��ѹ  ��ѹ���ܶ� 
	double c=0.85;
	return  c*S*sqrt(2*fabs(P1-p2)/r1);
}
double GetP2(double p){//�����ܶ���ѹǿ
 return 20289.19276072*p*p-31614.98423835*p +12315.37676421-1.6;
}
void  toin(double T,double jsv){//Tʱ���Ƿ���ͣ����򣬶Ը�ѹ�ͱã���ѹ�͹ܵ�Ӱ�죬������ѹǿ���ܶȵ� 
	//Tʱ���Ƿ���ͣ�
		
		vg=getV(T,jsv);
		rg=mg/vg;
		pg=GetP2(rg);
		
		
		if(vg==getV(0,jsv)){
//			cout<<"==========T== ========== "<<T<<endl; 
			vg=getV(0,jsv);
			pg=0.5;
			rg=getp(pg);
			mg=vg*rg;
		}
		
//		cout<<"mg="<<mg<<" ";
//		cout<<"vg="<<vg<<" ";
//		cout<<"rg="<<rg<<" ";
//		cout<<"pg="<<pg<<endl;
		if(pg>p0){
			//��λʱ��Ľ����� 
			double q=getQ(pg,rg,p0,Sg);//Sg,�ͱõĳ������ 
				q=q*rg*0.01;
				//��������
				m0=m0+q;
				
				
				//�����ܶ�
				r0=m0/v0;
				//����ѹǿ
				
				p0=GetP2(r0);
				 
				
				//�����ͱõ�������ѹǿ���ܶ� 
				mg=mg-q;
				rg=mg/vg;
				pg=GetP2(rg);
				
			cout<<"pin-------------"<<p0<<endl; 
		
			cout<<"T="<<T<<" jsv="<<jsv<<endl;
			cout<<"mg="<<mg<<" ";
			cout<<"vg="<<vg<<" ";
			cout<<"rg="<<rg<<" ";
			cout<<"pg="<<pg<<endl;		
				
			}
			
}
void toout(double T){
	//��ǰʱ�̳������ͣ�����
	//�뷧�ĸ߶ȣ�������0����� 
	Sw=getS(T);//���������� 
	double h=getwh(T);
	if(h>0){
		double q=getQ(p0,r0,pw,Sw);
		  
		  	q=q*0.01*r0;
		  	 //��������
			m0=m0-q;
			//�����ܶ�
			r0=m0/v0;
			//����ѹǿ
			p0=GetP2(r0); 
	} 
	 // cout<<"pou"<<p0<<endl; 
}

void toout2(double T){
	//��ǰʱ�̳������ͣ�����
	//�뷧�ĸ߶ȣ�������0����� 
	Sw=getS(T);//���������� 
	double h=getwh(T);
	if(h>0){
		double q=getQ(p0,r0,pw,Sw);
		  	
		  	q=q*0.01*r0;
		  	 //��������
			m0=m0-2*q;
			//�����ܶ�
			r0=m0/v0;
			//����ѹǿ
			p0=GetP2(r0); 
	} 
	 // cout<<"pou"<<p0<<endl; 
}


void test4(){
		double bodong=0x3f3f3f3f; 
		double tsum=0;
	
		for(double jsv=0;jsv<1;jsv+=0.001){
		//	jsv=0.027;
			double T=0;
			vg=43.6896;
			pg=0.5;
			rg=getp(pg);
			mg=rg*vg;
		    Sg=5*5*pi; 
			// jsv=0.027;
			
		
			 p0=100;
			 r0=0.85;
			 m0=r0*v0;
		
			double sum=0;//��¼������
			while(T<100){
				//1.���Tʱ�� ��ѹ�ͱ� ��������������ܶȣ�ѹǿ
				
				pg=GetP2(r0);
				
					//����,���¸�ѹ�ͱã��͹ܵ�  ������������ܶȣ�ѹǿ 
					toin(T,jsv);
				//3.�жϵ�ǰʱ���Ƿ�Ҫ���ͣ������������ͣ������� �͹ܵ�  ������������ܶȣ�ѹǿ 
					toout(T); 
					
				//	cout<<"p0="<<p0<<endl;
					sum+=fabs(p0-100);
					T=T+0.01;
			}
			if(bodong>sum){
				bodong=sum;
				tsum=jsv;
				
			}
		}
	cout<<"jsv="<<tsum<<endl;
} 


double jian(){
	if(p0>100.5){
		cout<<"p0= "<<p0<<" m0="<<m0<<endl; 
		double q=getQ(p0,r0,0.5,0.7*0.7*pi);
		double t=(m0-getp(100)*v0)/(q*r0);
		cout<<"q="<<q<<" t="<<t<<endl;
		p0=100;
		r0=0.85;
		m0=r0*v0;
		cout<<"p0"<<p0<<endl;
		cout<<"m0="<<m0<<endl;
		
		return t;
	}
	return 0;
	
	
	
}


void test5(){
		double bodong=0x3f3f3f3f; 
		double T; 
		for(double jsv=0;jsv<1;jsv=jsv+0.001){
			T=0;
			
			 p0=100;
			 r0=0.85;
			 v0=S*L;
			 m0=r0*v0;
			vg=43.6896;
			pg=0.5;
			rg=getp(pg);
			mg=rg*vg;
			cout<<"\n----------------------------------------------\n";
			while(T<100){
				toin(T,jsv);
				toout2(T);
			//	cout<<"jsv="<<jsv<<" T="<<T<<" p0="<<p0<<endl;
				if(p0<95){
					break;
				}
				T+=0.01; 
			}
			
			
		} 
		
		
} 
void getdata(){//����Ҫд 
	double y=100;
	int ind=0;
	for(double i=0;i<5000;i+=1){
		double t=fmod(i,1000);
		double t2=fmod(t,200);
	//	cout<<"t2="<<t2<<endl;
		if(t2<100){
			y-=0.02;
		}else if(t2<180){
			y+=0.05;
		}else if(t2<190){
			y-=0.32;
		}else if(t2<200){
			y=100;
		}
		
		Px[ind++]=y;
		
	} 
//	cout<<"index"<<ind<<endl;
	fstream of;
	of.open("data5.xls",ios::out);
	for(int i=0;i<ind;i++){
		of<<Px[i]<<endl;
	}
	delete []Px;
	delete []Rx;
	of.close();
	
}
int main(){

//cout<<getp(0.5)<<endl;
//cout<<GetP2(0.798244);
//	cout<<tan(9*pi/180);
//cout<<"getV(i,0.027)="<<getV(0,0.5)<<endl;
//	for(double i=0;i<10000;i=i+0.01){
////		cout<<getih(i,0.027)<<endl;
//double h=getV(i,0.027);
//		if(h<=44.6896||h<=21){
//		cout<<h<<endl;;
//			
//		}
//	}
//toin(0,0.027);
//cout<<mg<<endl;
//
//cout<<"getp()"<<getp(0.5)<<endl;
//cout<<"GetP2()"<<GetP2(getp(0.5))<<endl;

getdata();
//	for(double T=0;T<1000;){
//		
//		cout<<getV(T,0.021)<<endl;
//		T+=0.1;
//	}
	return 0;
} 
