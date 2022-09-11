#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int jiecheng(int n){
	
	if(n==1) return 1;
	int t=1;
	int i=1;
	int res=0;
	while(i<=n){
		t=t*(i++);
		res+=t;		
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	cout<<jiecheng(n)<<endl;
	
	return 0;
}
