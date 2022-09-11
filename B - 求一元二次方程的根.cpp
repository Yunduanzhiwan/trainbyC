///*利用公式
//x1 = (-b + sqrt(b*b-4*a*c))/(2*a), 
//x2 = (-b - sqrt(b*b-4*a*c))/(2*a)
//求一元二次方程ax2 + bx + c =0的根，其中a不等于0。
//*/
#include<iostream>
#include<math.h>
using namespace std; 
int main(void){
	int n;
	scanf("%d",&n);
	double a,b,c;
	while(n--){
		scanf("%lf %lf %lf",&a,&b,&c);
		double bo=b*b-4*a*c;//b2-4ac
		double x1=-b/(2*a);
		double x2=sqrt(fabs(bo))/(2*a);
		if(bo==0){//x1==x2
			printf("x1=x2=%.5lf\n",x1);
		}else if(bo>0){
		//	cout<<"x1="<<x1+x2<<" ;x2="<<x1-x2<<endl;
			printf("x1=%.5lf;x2=%.5lf\n",x1+x2,x1-x2);
		}else{
			//x1可能为-0  b导致 因为a不为0
			if(b!=0) 
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
			else 
				printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",x2,x2);
			//cout<<"x1="<<x1<<"+"<<x2<<"i;x2="<<x1<<"+"<<x2<<"i;"<<endl;
		}
	}
	return 0;
}
//#include "iostream"
//#include "cmath"
//using namespace std;
//int main(){
//	double a,b,c;
//	double delta,x1,x2;
//	int sign,stop;
//	cout<<"输入3个系数a(a!=0),b,c"<<endl;
//	cin>>a>>b>>c;
//	if(a==0){
//		cout<<"a不能等于0!!!!不然这就不是一元二次方程式了"<<endl;
//		exit(0);
//	}
//	delta=b*b-4*a*c;
//	if(delta==0){
//		cout<<"方程有两个实根：x1=x2="<<-b/(2*a)<<endl;
//	}
//	else{
//		if(delta>0) sign=1;
//		else sign=0;
//		delta=sqrt(fabs(delta));
//		x1=-b/(2*a);
//		x2=delta/(2*a);
//		if(sign){
//			cout<<"方程有两个不同的实根：x1="<<x1+x2<<"   x2="<<x1-x2<<endl;
//		}
//		else{
//			cout<<"方程无实根，有两个不同的复数根：x1="<<x1<<"+i"<<x2<<"   x2="<<x1<<"-i"<<x2<<endl;
//		}
//	}
//}
