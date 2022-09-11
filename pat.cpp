#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double liu=2.455;
	double gan=1.26;
	
	double t;
	t=(b==0?liu:gan);
	
	printf("%.2lf ",a*t);
	
	if(a*t<c){
		cout<<"T_T"<<endl;
	}else{
		cout<<"^_^"<<endl;
	}
	
	return 0;
} 
