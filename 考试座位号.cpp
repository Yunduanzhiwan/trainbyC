#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define MAX 1005
struct Node{
	string id;
	int sid;
	int kid;//¿¼ÊÔ×ùÎ»ºÅ
	 operator  <(const Node& no){
	 	return sid<no.sid;
	 } 
	
}node[MAX];
int compare(Node& a,Node& b){
	return a.sid<b.sid;
}
int main(){
	string id;
	int sid,kid;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>id>>sid>>kid;
		node[i].id=id;
		node[i].kid=kid;
		node[i].sid=sid;
	}
	
	sort(node,node+n,compare);
//	for(int i=0;i<n;++i){
//		cout<<node[i].id<<" "<<node[i].sid<<" "<<node[i].kid<<endl;;
//	}

	cin>>n;
	int t;
	for(int i=0;i<n;++i){
		cin>>t;
		t--;
		cout<<node[t].id<<" "<<node[t].kid<<endl; 
	} 
	
	return 0;
}
