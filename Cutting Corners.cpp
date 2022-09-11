#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
const double eps=1e-2;
bool isDigit(double x)
{
    if(x>(int)(x+0.5))
    {
         if(x-(int)(x+0.5)<eps)
            return true;
    }
    else
    {
        if((int)(x+0.5)-x<eps)
            return true;
    }

    return false;
}
int main(){
	double a,b;
	//scanf("%lf %lf",&a,&b);
	cin>>a>>b;
	double s1=a+b;
	double s2=sqrt(1.0*a*a+b*b);
	if(isDigit(s1-s2)){
		cout<<s1-s2<<endl;
	}else{
		
		cout<<fixed<<setprecision(9)<<s1-s2<<endl;
	}
//	printf("%lf",s1-s2);
	return 0;
} 
