/*
һ��������,������ܱ�7����,��������ʮ���Ʊ�ʾ����ĳһλ�ϵ�����Ϊ7,�����Ϊ��7��ص���.��������С�ڵ���n(n < 100)����7�޹ص���������ƽ����.

Input
����Ϊһ��,������n(n < 100)
Output
���һ�У�����һ����������С�ڵ���n��������7�޹ص���������ƽ���͡�
Sample Input
21
Sample Output
2336
*/

#include<iostream>
using namespace std;
bool isqi(int n){
	if(n%7==0){
		return false;
	}
	int t=0;
	while(n){
		 t=n%10;
		 n/=10;
		 if(t==7){
		 	return false;
		 }
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	unsigned long long sum=1;
	for(int i=2;i<=n;++i){
		if(isqi(i)){
			sum+=(i*i);
		}
	}
	cout<<sum<<endl;
	return 0;
}
