//#include<iostream>
//using namespace std;
//int main(){
//   long long n,i,j=0;
//   int a[100005];
//   while(1){
//	   cin>>n;
//	   i=j=0;
//	   if(n==0){
//	   	break;
//	   }
//	   
//	   i=n;
//	   while(i){
//	    a[j]=i%2;
//	    i/=2;
//	    j++;
//	   }
//	   for(i=j-1;i>=0;i--){
//	    cout<<a[i];
//	   }
//	   cout<<endl;
//   	
//   }
//   return 0; 
//}

#include<iostream>
#include<string.h>
using namespace std;
int n;
int solve = 0;
void dfs(unsigned long long num,int k){
	if(solve)return;
	if(num%n==0){
		cout<<num<<endl;
		solve = 1;
		return;
	}
	if(k>=19)return;
	dfs(num*10,k+1);
	dfs(num*10+1,k+1);
}
int main(){
	while(scanf("%d",&n)&&n){
		solve = 0;
		dfs(1,1);
	}
	return 0;
} 

