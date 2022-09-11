#include<iostream>
using namespace std;
#define MAX 500
typedef int DateType
int tree[MAX];
int size;
int ind;

struct Node{
	DateType date;
	int quan;
	struct Node* Left;
	struct Node* right;
};
Node* root;

Node* getNode(DateType date,int quan){
	Node* res=new Node;
	res->date=date;
	res->quan=quan;
	return res;
}


void insertTree(int in){
	if(root==NULL){
		root=new Node;
		root->quan=in;
	}
	else{
		Node* Parent=root;
		while(in>Parent->quan&&Parent){
			Parent=Parent->Left;
			if(in>Parent->right->quan)
				Parent=Parent->right;
		}
			
	
		
		
		
	}
	
	
}
Node* Hufuman(){
	
	
	
	
}


int main(){
	
	
	
	return 0;
} 
