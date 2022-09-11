
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int quan[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char zhen[18]={'1','0','X','9','8','7','6','5','4','3','2'};

int main(){
	int n;
	cin>>n;
	string str;
	int t=n;
	while(n--){
		cin>>str;	
		int sum=0;
		int falg=0;
		for(int i=0;i<17;++i){//前17位判断，加权求和 
			if(str[i]<'0'||str[i]>'9'){
				falg=1;
			}else{
				sum+=(quan[i]*(str[i]-'0'));
			}
		} 
		if(zhen[sum%11]!=str[17]||falg){
			cout<<str<<endl;
		}else{//如果这个是正确，则--直到0，0为全部通过 
			t--;
		}
	}
	if(t==0){
		cout<<"All passed"<<endl;
	}
	
	return 0;
} 
