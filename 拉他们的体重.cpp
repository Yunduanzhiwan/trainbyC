#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 

class So{
	public:
		int lsum;
		int rsum;
		 operator<(const So  &a){
			if(&a!=this){
				if(a.lsum==lsum){
					return rsum<a.rsum;
				}
				return lsum<a.lsum;
			}
			return 0;
		}
		operator==(const So &a){
			if(&a!=this){
				return lsum==a.lsum&&rsum==a.rsum;
			}
		}
		operator=(const int& a){
			
				 lsum=a;
				 rsum=a;
			
		}
//		ostream& operator<<(ostream &os,const So &a){
//			os<<a.lsum<<" "<<a.rsum<<endl;
//			return os;
//		}

//		ostream& operator<<(ostream &os,const So &a){
//			os << a.lsum << " " << a.rsum << endl;
//			return os;
//		}
};

int main(){
	int n;
	cin>>n;
	So sos[n+2]={0};
	int nums[2+n]={0};
	sos[0]=0;
	sos[n+1]=0;
	for(int i=1;i<=n;++i){
		cin>>nums[i];
		
	}
	sort(nums,nums+n+1);
	for(int i=1;i<=n+1;++i)sos[i].lsum=sos[i-1].lsum+nums[i-1];
	//sos[n+1].lsum=sos[n].lsum+nums[n];
	for(int i=n;i>=1;--i){
		sos[i].rsum=sos[i+1].rsum+nums[i+1];
	} 
	for(int i=1;i<=n;++i)cout<<sos[i].lsum<<" "<<sos[i].rsum<<", ";
	cout<<endl;
	sort(sos,sos+n+1);
	for(int i=1;i<=n;++i)cout<<sos[i].lsum<<" "<<sos[i].rsum<<", ";
	cout<<endl;
	return 0;
} 
