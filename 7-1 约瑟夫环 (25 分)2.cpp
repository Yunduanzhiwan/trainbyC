#include<bits/stdc++.h>
#include<set>
using namespace std;
const int MAX=3003;
set<int> se;
int vis[MAX]={0};
int main(){
	se.insert(1);
	se.insert(3);
	se.insert(5);
	se.insert(2);
	se.erase(1);
	
	int n,p;
//	cin>>n>>p;
	n=7;
	p=3;
	int pre=0;
	int ans=1;
	int temp=1;
	int shen=n; 
	int l,r;
	l=1;r=n;
	for(int i=1;i<=n;++i){
		pre++;
		temp=pre;
		ans=1;
		while(ans!=p){
			ans++;
			temp++;
			if(temp>r){
				temp=l;
			}
			while(vis[temp]){
				temp++;
				if(temp>r){
					temp=l;
				}
			}
			
			
			//cout<<"ans="<<ans<<endl;
		//	cout<<"temp="<<temp<<endl;
		}
		if(temp==l){
			l++;
		}
		if(temp==r){
			r--;
		}
		cout<<temp<<endl;
		vis[temp]=1;
		pre=temp;
		
		
		
	}
	
	
	return 0;
}
