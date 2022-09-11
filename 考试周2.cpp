#include<iostream>
using namespace std;
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	double c=1.0*a/b;
//	cout<<a<<" b="<<b<<" c="<<c;
	printf("%d/%.1lf=%d",a,c,b);
	return 0;
}
