/**
X轴上有N条线段，每条线段包括1个起点和终点。
线段的重叠是这样来算的，10201020和12251225
的重叠部分为12201220。
给出N条线段的起点和终点，从中选出2条线段，
这两条线段的重叠部分是最长的。输出这个最长的距离。
如果没有重叠，输出0。

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
		if(t>nodes[i].e){//包含 
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
