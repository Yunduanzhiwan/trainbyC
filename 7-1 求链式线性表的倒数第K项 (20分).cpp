//#include<iostream>
//using namespace std;
//int main(){
//		int n;
//		cin>>n;
//		int res=-1;
//		int num;
//		
//		int nums[n+2];
//		int i=1;
//		int t=n;
//		while(1){
//			cin>>num;
//			if(num<0)break;
//			if(i>n){
//				for(int j=1;j<n;++j){
//					nums[j]=nums[j+1];
//				}
//				nums[n]=num;
//			}else{
//				nums[i]=num;
//			}
//			
//			i++;
//			
//		}
//	
//	
//	return 0;
//} 



#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	
	vector<int> v;
	int n;
	cin>>n;
	
	int num;
	while(true){
		cin>>num;
		if(num < 0){
			break;
		}
		v.push_back(num);
	}
	
	if(n<=v.size())
		cout<<v[v.size()-n]<<endl;
	else
		cout<<"NULL"<<endl;
	
	return 0;
}
