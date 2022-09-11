#include<iostream>
#include<queue>
using namespace std;
typedef struct Node{
	int l;
	int r;
}SNode;
queue<SNode> q;//存的是地址 
void solve(int *nums,int l,int r){//闭区间 
    if(l>r)return;
	int n=r-l;
//	cout<<nums[r]; 
	q.push((SNode){l,r});
	struct Node node;
	bool flag=true;
	while(!q.empty()){
		node=q.front();q.pop();
		l=node.l;
		r=node.r;
		if(l<=r){
			if(flag){
				 cout<<nums[r];
				 flag=false;
			}
			else
				cout<<" "<<nums[r];
		}
			
		if(l<r){
			int zhon=r-1-(r-l)/2;
			if(l<=zhon){
			//	cout<<"pushl "<<l<<" "<<zhon<<" "<<nums[zhon]<<endl;
				
				q.push((SNode){l,zhon});	//左子树
				
			}
			if(zhon+1<=r-1){
			//	cout<<"pushr "<<zhon+1<<" "<<r-1<<" "<<nums[r-1]<<endl;
				q.push((SNode){zhon+1,r-1});
				
			}
		}
	}
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    solve(nums,0,n-1);
    return 0;
}
