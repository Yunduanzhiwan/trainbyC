/**
X������N���߶Σ�ÿ���߶ΰ���1�������յ㡣
�߶ε��ص�����������ģ�10201020��12251225
���ص�����Ϊ12201220��
����N���߶ε������յ㣬����ѡ��2���߶Σ�
�������߶ε��ص���������ġ���������ľ��롣
���û���ص������0��

*/


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

class Node{
	public:
		int s;
		int e;
		
		bool operator<(const Node& b){
			return s!=b.s?s<b.s:e>b.e;
		}
}; 

Node nodes[50000];
int main(){
	int n;
	cin>>n;
	int i;
	for( i=0;i<n;++i){
		cin>>nodes[i].s>>nodes[i].e;
	} 
	sort(nodes,nodes+n);
	
	int t=nodes[0].e;
	int res=0;
	for( i=1;i<n;++i){
		if(t>nodes[i].e){//���� 
			res=max(res,nodes[i].e-nodes[i].s);
		//	cout<<"1"<<endl;
		}else{
			res=max(res,t-nodes[i].s);
			t=nodes[i].e;
		//	cout<<"2"<<endl;
		}
	}
	
	cout<<res<<endl;
	
	
	return 0;
} 
