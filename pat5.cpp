#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	getchar();
	string str;
	while(m--){
		getline(cin,str);
	//	cout<<"sr="<<str<<endl;
		int res=0;
		for(int i=n-1;i>=0;--i){
			int t=(str[i]=='n'?1:0);
			res=res+t*pow(2,n-i-1);
		//	cout<<"res="<<res<<" ";a
		}
		cout<<res+1<<endl;
	}

	
	

	return 0;
}
