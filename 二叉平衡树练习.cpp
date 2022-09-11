#include<iostream>
using namespace std;
template <class T>
class Tree{
	public:
		T Date;
		Tree* Left;
		Tree* Right;
		Tree(T date){
			Date=date;
			Left=NULL;
			Right=NULL;
		}
		~Tree(){
			cout<<"delete"<<Date<<endl;
			if(Left) delete Left;
			if(Right) delete Right;
			
		}
		bool Insert(T date){
			Tree* parent=NULL;
			Tree* current=this;
			while(current!=NULL){
				if(date>current->Date){
					parent=current;
					current=current->Right;
				}else if(date<current->Date){
					parent=current;
					current=current->Left;
				}else{//已经存在 
					return false;
				}
			}
			if(current==NULL){
				if(date>parent->Date){
					parent->Right=new Tree(date);
				}else if(date<parent->Date){
					parent->Left=new Tree(date);
				}
			}
			return true;
		}
		
		bool Delete(T date){
			Tree* parent=NULL;
			Tree* current=this;
			
			while(current){
				if(date>current->Date){
					parent=current;
					current=current->Right;
				}else if(date<current->Date){
					parent=current;
					current=current->Left;
				}else{//已经找到 
					cout<<"找到"<<endl;
					break;
				}
			}
			
			if(current==NULL){
				//没有找到
				return false; 
			}
			cout<<"开始删除\n";
			if(current->Left==NULL){//左子树为空 
				cout<<"左子树为空\n";
				if(parent==NULL){//第一个，根节点 
					current->~Tree();
				}else{if(date>parent->Date){
						parent->Right=current->Right;
					}else if(date<parent->Date){
						parent->Left=current->Right;
					}
				}
			}else{
				cout<<"左子树no为空\n";
				//找到左子树最大值
				 Tree* Leftparent=current;
				 Tree* LeftMost=current->Left;
				 cout<<"Leftparent"<<Leftparent->Date<<endl;
				 while(LeftMost->Right){
				 	Leftparent=LeftMost;
				 	LeftMost=LeftMost->Right;
				 }
				 cout<<"找到左子树最大值"<<LeftMost->Date<<endl;
				 current->Date=LeftMost->Date;
				 cout<<"Leftparent"<<Leftparent->Date<<endl;
				 
				 if(Leftparent->Left==LeftMost){
				 	cout<<"1"<<endl;
				 	Leftparent->Left=LeftMost->Left;
				 }else if(Leftparent->Right==LeftMost){
				 	cout<<"2"<<endl;
				 	Leftparent->Right=LeftMost->Left;
				 }
				 cout<<"删除成功"<<date<<endl;
				 LeftMost->Right=LeftMost->Left=NULL;
				 delete LeftMost;
				 //LeftMost->~Tree();
			}
			return true;
		}
		void show(){
			if(this->Left){
				this->Left->show();
			}
			cout<<Date<<endl; 
			if(this->Right){
				this->Right->show();
			}
		}
};


int main(){
	
	Tree<int> root= Tree<int>(46);
	root.Insert(23);
	root.Insert(26);
	root.Insert(24);
	root.Insert(10);
//	root.Insert(75);
//	root.Insert(48);
//	root.Insert(47);
//	root.Insert(49);
	root.show();
	

	return 0;
}
