#include<iostream>
using namespace std;
#define MAX 33
int qian[MAX];
int zhon[MAX];
int shu[MAX];

int ind=0;
int solve(int x){
	shu[ind++]=qian[x];
	
	solve(x++);
}
int main(){
	
	int n;
	cin>>n;
	
	
	return 0;
} 
