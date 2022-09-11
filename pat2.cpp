#include<iostream>
using namespace std;
int main(){
	double n;
	scanf("%lf",&n);
	double tn=n;
	double c;
	double sum=0;
	while(n--){
		cin>>c;
		sum=sum+(1.0/c);
	}

   
	printf("%.2lf",1.0/(sum/tn));

	return 0;
}
