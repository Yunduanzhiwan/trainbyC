#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("c.in","r",stdin);
	freopen("c.out","w",stdout);
	unsigned long long n,x,y,t;
	cin>>n;

	unsigned long long na,nb;
	na=4,nb=6;
	unsigned long long pa,pb;
	pa=32;pb=36;
	
	unsigned long long suma,sumb;

	 t=(n/na);
	if(n%na)t++;
	suma=pa*t;
	
	t=n/nb;
	int ta=0;
	if(n%nb>na){
		t++;
	}else{
		ta=1;
	}
	sumb=pa*ta+pb*t;
	
	unsigned long long min=suma<sumb?suma:sumb;
	cout<<min<<endl;
		
	return 0;
}
