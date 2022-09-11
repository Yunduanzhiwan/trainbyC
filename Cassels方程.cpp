#include<iostream>
using namespace std;
bool test(int x,int y,int z){
	if(x*x+y*y+z*z==3*x*y*z)
		return true;
	return false;
}
int main(){
	int x,y,z;
	int n;
	
	
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>x>>y>>z;
		if(test(x,y,z))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
	
	return 0;
}
