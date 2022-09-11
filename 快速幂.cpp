#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
#define MAX 5500
#define mod 10
class Mat{
	public:
		T date[MAX][MAX];
	Mat(T init,int n){
		for(int i=0;i<n;++i){
			date[i][i]=init;
		}
	}
	Mat* operator*(const Mat* B){
		Mat* res=new Mat(1,n);
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				for(int k=0;k<n;++k){
					res->date[i][j]=(res->date[i][j]+(date[i][k]*B->date[k][j])%mod)%mod;
				} 
			}
		}
		return res;
	}
};

Mat fastMul(Mat a,ll b,ll mod){
	Mat res(1);
	while(b){
		if(b&1) res=(res*a)%mod;
		a=((a*a)%mod);
		b>>=1;
	}
	return res;
}

ll fastMul(Mat a,ll b,ll mod){
	int res=1;
	while(b){
		if(b&1) res=(res*a)%mod;
		a=((a*a)%mod);
		b>>=1;
	}
	return res;
}
int main(){
	
	return 0;
} 
