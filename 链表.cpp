#include<iostream>
#include<string>
#include<queue>
using namespace std;
typedef int Elemtype;
struct node
{
	char data;
	node* left;
	node* right;
};
typedef node* Node;
string s;
queue<node*> q;
int i=0;
void init(Node* T){
	if(s[i]=='#'){
		i++;
		*T=NULL;
	}
	else{
		(*T)=new node;
		(*T)->data=s[i];
		i++;
		init(&(*T)->left);
		init(&(*T)->right);
	}
}
void show(Node node){
		Node t;
	if(node!=NULL){
		q.push(node);
        int flag=1;
		while(!q.empty()){
			t=q.front();
			q.pop();
            if(flag){
                flag=0;
			cout<<t->data;
            }else{
                
			cout<<" "<<t->data;
            }
			if(t->lchild!=NULL) q.push(t->lchild);
			if(t->rchild!=NULL) q.push(t->rchild);
			delete t;
		}
	}
}
int  main(){
	s="abd##e##cf###";
	getline(cin,s);
	Node* root=new Node;
	Node rr=NULL;
	init(&rr);
	show(rr);
	delete root;
	return 0;
}



