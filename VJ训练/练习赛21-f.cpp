#include<iostream>
#include <vector>
#include<string.h>
using namespace std;
bool a[10001];
void sieve(int n) {//函数声明,求n以内的质数
	vector<int> temp;
    int cont = 0;
    memset(a, true, sizeof(a));
    for (int i = 2; i <= n; ++i) {
        if (a[i]) {
            temp.push_back(i);//加入数组
        }
        cont = temp.size();//在这里得到，数组的元素个数，可以避免for循环内反复调用函数，节省时间
        for (int j = 0; j < cont&&temp[j]*i<=n; ++j) {
            a[temp[j] * i] = false;
            if (i % temp[j] == 0) {//避免重复标记//当前数i 是当前素数的倍数，则后面的素数乘以当前数肯定是当前数的倍数，会造成重复标记，所以遇到整除要结束当前循环的标记，进入下一轮
                break;
            }
        }
    }
}
void init(){
	sieve(9999);
}
int res=0;
int solve(int n,int m){
	int tn=n;
	int tm=m;
	int yn,ym;
	yn=ym=0;
	for(int i=0;i<4;++i){
		if(tn%10==tm%10){
			yn+=(tn%10*pow(10,i));
			ym+=(tm%10*pow(10,i));
			tn/=10,tm/=10;
		}else{
			if(a[tn*pow(10,i)+(tm%10)*10+yn])
		}
		if(n%10!=m%10){
			n/=10;//m/=10;
			if(a[n*10+m%10]){
				res++;
				return 1+solve(a[n*10+m%10]);
			}
		}
	}
}
int main(){
	init();
	string n,m;
	cin>>n>>m;
	
	
	return 0;
}

