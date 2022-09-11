#include<iostream>
using namespace std;

int main(){
	char f,to;
	int n;
	cin>>f>>n;
	char cm[n][n];
	getchar();
	for(int i=0;i<n;++i){
		string str;
		getline(cin,str);
//		cout<<"is"<<str<<endl;
		for(int j=0;j<n;++j){
			cm[i][j]=str[j];
		}
	}
	
	int flag=1;
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-1;++j){
			if(cm[i][j]!=cm[n-i-1][n-j-1]){
				flag=0;	
			}
		}
	}
	if(flag){
		cout<<"bu yong dao le"<<endl;
	}
	
	for(int i=n-1;i>=0;--i){
		for(int j=n-1;j>=0;--j){
			if(cm[i][j]!=' '){
				cout<<f;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
