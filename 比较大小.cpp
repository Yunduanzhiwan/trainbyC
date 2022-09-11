#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int nums[4];
	for(int i=0;i<3;++i){
		cin>>nums[i];
	}
	sort(nums,nums+3);
	
	cout<<nums[0];
	for(int i=1;i<3;++i){
		cout<<"->"<<nums[i];
	} 
	
	return 0;
}
