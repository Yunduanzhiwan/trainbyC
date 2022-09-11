#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int vis[100010];
int findx(long long val,int left,int right){
	while(left<=right){
		int mid=left+(right-left)/2;
		if(vis[mid]>val){
			right=mid-1;
		}else if(vis[mid]<val){
			left=mid+1;
		}else{
			return mid;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	
	memset(vis,0,sizeof(vis));
	for(int i=0;i<n;++i){
		cin>>vis[i];
	} 
	sort(vis,vis+n);
	
	int m;
	cin>>m;
	for(int i=0;i<n;++i){
		int index=findx(m-vis[i],0,n);
		if(index!=-1&&(i!=index)){
			cout<<vis[i]<<" "<<vis[index]<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;

} 
