#include<iostream>
using namespace std;
typedef unsigned long long ll;
int falg=0;
int n;
void solve(ll num,int k){
	if(falg)return;
	if(num%n==0){
		cout<<num<<endl;
		falg=1;
		return;
	}
	if(k>19){
		return;	
	}
	solve(num*10,k+1);
	solve(num*10+1,k+1);
}
int main(){
	while(scanf("%d",&n)&&n){
		falg=0; 
		solve(1,1);
	}
	return 0;
}
