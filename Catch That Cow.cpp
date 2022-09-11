#include<iostream>
#include<math.h> 
#include <queue>
using namespace std;
queue<int> q;
int N,K;
int time[100003];
void bfs(){
	q.push(N);
	while(!q.empty()){
		int a=q.front();
		q.pop();
		int b=a+1;
		int c=a-1;
		int d=a*2;
		
		//K(0¡Ü)K(¡Ü100,000)
		if(b<=100000&&!time[b]){
			time[b]=time[a]+1; 
			q.push(b);
		}
		if(c>=0&&c<=100000&&!time[c]){
		 time[c]=time[a]+1; q.push(c);
		 }
		  
		if(d<=100000&&!time[d]){
		  time[d]=time[a]+1;q.push(d);
		} 
		
		if(b==K||c==K||d==K){
		return;
		} 
	}
}

int main(void){
	cin>>N>>K;
		if(N>=K){
			cout<<N-K<<endl;
		}else{
			bfs();
			cout<<time[K]<<endl;
		}
	return 0;
} 
