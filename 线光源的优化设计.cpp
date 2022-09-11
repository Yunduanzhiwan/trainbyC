#include<iostream>
using namespace std;
int main(){
	double  l=8;
	double z3=25015;
	double x0,y0,z0,x1,y1,z1,x2,y2,z2,x3,y3;
	double a=60;
	double t,t2;
	double len=(l/2);
	
	 double  ix[100000];
	 double  iy[100000];
	int i;
	for(double x0=-len;x0<len;){
		y0=0;
		z0=15;
		x0=x0+0.1;
		for(double x1=-36;x1<36;++x1){
			for(double y1=-36;y1<36;++y1){
				a=60;
				a=60;
		        z1=(x1*x1+y1*y1)/a;
		        t=(2*x0*x1-2*x1*x1+2*y1*y1-900+60*z1)/(4*x1*x1+4*y1*y1+3600);
		        z2=2*(-60*t+z1)-15;
		        y2=4*y1*t+2*y1;
		        x2=4*x1*t+2*x1-x0;
		        t2=(z3-z1)/(z2-z1);
		        x3=(x2-x1)*t2+x1;
		        y3=(y2-y1)*t2+y1;
				
				
				ix[i]=x3;
				iy[i]=y3;
				++i;
				cout<<"x3"<<x3<<" ";		
			}
		}
		
	}
	for(int xx=0;xx<i;++xx){
		//for(int yy=0;y<i;++y){
			printf("%.2lf %.2lf ",ix[xx],iy[xx]);
		//}
	}
	
	return 0;
} 
