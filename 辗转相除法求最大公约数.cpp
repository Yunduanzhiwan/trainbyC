/**
辗转相除法求最大公约数



int GCD(int a,int b)
 { 
      return b==0?a:GCD(b,a%b);
}
 


*/ 

#include<iostream>
#include<vector> 
using namespace std;


int GCDIteratImpl(int a,int b){
	return b==0?a:GCDIteratImpl(b,a%b);
}
int GCDcycleImpl(int a,int b){
	int t;
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
		cout<<a<<endl;
	}
	return a;
}



int getyin(int *a,int len){
	int max=a[0];
	for(int i=1;i<len;++i){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int j=2;j<=max;++j){
		int flag=1;
		for(int i=0;i<len;++i){
			if(a[i]%j!=0){
				flag=0;			}
		}
		if(flag){
			return j;
		}
	}
	return 1;
}


//短除法求数组的最大公约数
int GCDshort_divisionImpl(int *a,int len){
	int res=1;
	int t=getyin(a,len);
	while(t!=1){
	///	cout<<"t="<<t<<endl;
		for(int i=0;i<len;++i){
			a[i]/=t;
		}
		res*=t;
		t=getyin(a,len);
	}
	return res;
}


int GCD(int a,int b){ 
	//return GCDIteratImpl(a,b);
 	return	GCDIteratImpl(a,b);
}
int GCD(int *a,int b){ 
	//return GCDIteratImpl(a,b);
 	return	GCDshort_divisionImpl(a,b);
}

int main(){
	vector <int>v;
	int t;
	while(cin>>t){
		v.push_back(t);
	}
	int *nums=new int[v.size()];
	for(int i=0;i<v.size();++i){
		nums[i]=v[i];
	}
	cout<<GCD(nums,v.size());
//	cout<<GCDshort_divisionImpl(nums,v.size());
	delete nums;
	return 0;
} 
