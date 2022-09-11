#include<iostream>
using namespace std;

int gcd(int x,int y){
	
	
	while(y!=0){
		int t=y;
		y=x%y;
		x=t;
	}
	return x;
	
} 
int main(){
	int fz,fm;
	fz=0;fm=1;
	int n;
	scanf("%d",&n);
	int fzt,fmt;
	for(int i=0;i<n;++i){
		scanf("%d/%d",&fzt,&fmt);
			fz=fz*fmt+fzt*fm;
			fm*=fmt;
			int gcdt=gcd(abs(fz),abs(fm));
			fz/=gcdt;
			fm/=gcdt;
	} 
	if(fm==1){
		printf("%d\n",fz);
	}else if(fz>fm)
		printf("%d %d/%d",fz/fm,fz%fm,fm);
	else
		printf("%d/%d",fz,fm);
	return 0;
}
