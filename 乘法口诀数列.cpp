#include<iostream>
#include<vector>
#include<sstream>
#include<string.h>
using namespace std;

int main() {
    int a, b, k;
    int s = 0;
	
	cin>>a>>b>>k;
	
	int nums[1003];
	int ind=0;
	int max=0;
	nums[0]=a;
	nums[1]=b;
	int res=a*b;
	ind=0;
	max=1;
    if(k==0||a>8||b>9) exit(0);
    if(k==1) cout<<a<<endl;
    if(k>=2)
	    cout<<a<<" "<<b;
	s=2;
	string str;
	while(s<k){
		str="";
		while(res){
			str+=(res%10)+'0';
			res/=10;
		}
		for(int i=str.length()-1;i>=0;--i){
			cout<<" "<<str[i];
			nums[++max]=str[i]-'0';
			s++;
			if(s==k){
				break;
			}
			
		}
		ind++;
		a=nums[ind];
		b=nums[ind+1];
		res=a*b;
	//	cout<<"str="<<str<<" len"<<str.length()<<endl;
	//	s++;
	} 
    
    return 0;
}
