/*

�ϲ�����


�����������������Ū�ˣ�����ϲ����ټ��ϴ�ģ����Ե�Ȼ����С�ĺϲ����öѣ����ȶ��У� 
*/ 

#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,ans;
	cin>>n;
	priority_queue<int, vector<int> ,greater<int> > q;
	for(int i=0;i<n;++i){
		cin>>ans;
		q.push(ans);
	}
	int sum=0;
	int a,b;
	while(q.size()>1){//ע��q.size()>0 ����� ������ֻ��һ������topһ�� 
		a=q.top();q.pop();
		b=q.top();q.pop();
		sum+=(a+b);
	//	cout<<a<<" b="<<b<<endl; 
		q.push(a+b);
		
	}
	cout<<sum<<endl;
	return 0;
}
