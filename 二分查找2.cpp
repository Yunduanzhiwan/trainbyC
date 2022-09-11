#include<iostream>
using namespace std;
int n;
int num[1003];
int ci=0;
int binarySearch(int begin,int end,int target) {
	while(begin<end) {
		ci++;
		int mid = (begin + end) / 2;
		if(num[mid]==target)
			return mid;
		else if(num[mid]<target)
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return end;
}
int main(){
	
	cin>>n;
	
	for(int i=0;i<n;++i)cin>>num[i];
	
	int fin;
	cin>>fin;
	
	int res=binarySearch(0,n-1,fin);
	if(res==n){
		cout<<"-1"<<endl;
		cout<<ci<<endl; 
	}else{
		cout<<res<<endl;
		cout<<ci+1<<endl;	
	}
	//cout<<binarySearch(0,n,fin)<<endl; 

	
} 
