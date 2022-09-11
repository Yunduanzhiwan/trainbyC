#include<iostream>
using namespace std;
typedef char ElemType;
typedef struct BitNode{
	ElemType date;
	struct BitNode* left;
	struct BitNode* right;
}*trrePtr;
void init(trrePtr &root){
	char c;
	cin>>c;
	if(c=='#'){
		root=NULL;
	}else{
		root=new BitNode;
		root->date=c;
		init(root->left);
		init(root->right);
	} 
}
void midShow(trrePtr root){
	if(root){
		midShow(root->left);	
		cout<<root->date;
		midShow(root->right);
	}
}
int main(){
	trrePtr root=NULL;
	init(root);
	midShow(root);
	return 0;
} 
