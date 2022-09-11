#include<iostream>
using namespace std;
#define MAX 100005
int nums[MAX]={0};
int find(int left,int right,int value){
	
	while(left<right){
		int mid=(left+right)/2;
		if(nums[mid]>=value){
			
		}
		
		
		
	} 
	
	
//	int index=(left+right)/2;
////	5cout<<"index="<<index<<endl;
//	
//	if(nums[left]==value||nums[right]==value){
//		return nums[left]==value?left:right;
//	}
//	
//	if(right==left+1){
//		return -1;
//	}
//	if(value>nums[index-1]&&nums[index]==value){
//		return index;
//	}
//	if(nums[index]>=value){
//		return find(left,index ,value);
//	}else{
//		
//		return find(index,right,value);
//	}
	
	
}
int main(){
	int n;
	cin>>n;
//	cout<<"n"<<n<<endl;
	for(int i=1;i<=n;++i){
		cin>>nums[i];
	}
	int f;
	cin>>f;
	int res=find(1,n,f);
	if(res!=-1){
		cout<<res<<endl;
		
	}else{
		cout<<n+1<<endl;
	}
	return 0;
}
