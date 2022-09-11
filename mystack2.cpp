#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//采用模板类节点 ，结构体总是不知道啥毛病，老报错 
template<class T>
class Node{
private:
	T data;//数据 
	//节点的上一个节点，往栈底方向，如果本节点的前驱节点为空，则本节点为栈的最后一个节点
	Node *pre; 
public:
	Node(){}
	Node(T t,Node* _pre){
		data = t;
		pre = _pre;
	}

	T getData(){
		return data;
	}
	void setData(T t){
		data = t;
	}
	Node* getPre(){
		return pre;
	}
	void setPre(Node *_pre){
		pre = _pre;
	}
	~Node(){
//		cout<<"\n执行析构函数Node"<<endl;
	}

};



template<class T>
class mystack2{
private:
	Node<T>* top;//定义栈顶节点 
	Node<T>* Temp;//定义中间节点 
public:
	mystack2(){//初始化 
		top = NULL;
		Temp = NULL;
	}
	//判空 
	bool isEmpty(){
		return top == NULL;
	}
	
	
//因压栈和出栈均动态变化并且不会造成内存浪费，故此实现决定不考虑栈的节点上限  
	
//	//判断是否 满了，
	bool isFull(){//一直不满 
		return false; 
	}
	//压栈 
	bool push(T temp){
			Temp = new Node<T>(temp, NULL);//分配内存 ，并设置数据，前驱为空 
			//如果栈顶存在，即栈里本来有节点，则次节点的前驱指向栈顶 
			if (top != NULL){
				Temp->setPre(top);
			}
			
			//新压入的节点为栈顶 
			top = Temp;//更新栈顶 
			return true;
	}
	//出栈 
	T pop(){
		T t = top->getData();//取出栈顶的值 
		Temp = top;//临时保存 
		top = top->getPre();//出栈后，栈顶的前驱变为栈顶 
		delete Temp;//销毁栈顶 

		return t; 
	}
	//得到栈顶的数据 
	T gettop(){
		T t = top->getData();
		return t;
	}
	//析构函数 
	~mystack2(){
	//	cout<<"\n执行析构函数mystack2"<<endl; 
	
	//当栈顶不为空 
			while (top)
			{
				//取出栈顶， 
				
				Temp = top;
				//更新栈顶 
				top = top->getPre();
				delete Temp;//销毁栈顶 

			}

		

		//最后判断 
		if (Temp){

			delete Temp;
			Temp=NULL;
		}
		if (top){

				delete top;
				top=NULL;
		}
	}
};

int main(){
	mystack2<int> s;
	cout<<s.isEmpty()<<endl;
	cout<<s.isFull()<<endl;
	
	int a=100;
	int b=200;
	s.push(a);
	cout<<"top1="<<s.gettop()<<endl;
	s.push(b);
	cout<<"top2="<<s.gettop()<<endl;
	cout<<"pop1="<<s.pop()<<endl;
	cout<<"isempty? "<<s.isEmpty()<<endl;
	cout<<"pop2="<<s.pop()<<endl;
	cout<<"isempty? "<<s.isEmpty()<<endl;

	s.push(a);
	cout<<"top3="<<s.gettop()<<endl;
	s.push(b);
	s.push(a);
	s.push(b);


	return 0;
}
