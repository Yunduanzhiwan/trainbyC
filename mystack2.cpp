#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//����ģ����ڵ� ���ṹ�����ǲ�֪��ɶë�����ϱ��� 
template<class T>
class Node{
private:
	T data;//���� 
	//�ڵ����һ���ڵ㣬��ջ�׷���������ڵ��ǰ���ڵ�Ϊ�գ��򱾽ڵ�Ϊջ�����һ���ڵ�
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
//		cout<<"\nִ����������Node"<<endl;
	}

};



template<class T>
class mystack2{
private:
	Node<T>* top;//����ջ���ڵ� 
	Node<T>* Temp;//�����м�ڵ� 
public:
	mystack2(){//��ʼ�� 
		top = NULL;
		Temp = NULL;
	}
	//�п� 
	bool isEmpty(){
		return top == NULL;
	}
	
	
//��ѹջ�ͳ�ջ����̬�仯���Ҳ�������ڴ��˷ѣ��ʴ�ʵ�־���������ջ�Ľڵ�����  
	
//	//�ж��Ƿ� ���ˣ�
	bool isFull(){//һֱ���� 
		return false; 
	}
	//ѹջ 
	bool push(T temp){
			Temp = new Node<T>(temp, NULL);//�����ڴ� �����������ݣ�ǰ��Ϊ�� 
			//���ջ�����ڣ���ջ�ﱾ���нڵ㣬��νڵ��ǰ��ָ��ջ�� 
			if (top != NULL){
				Temp->setPre(top);
			}
			
			//��ѹ��Ľڵ�Ϊջ�� 
			top = Temp;//����ջ�� 
			return true;
	}
	//��ջ 
	T pop(){
		T t = top->getData();//ȡ��ջ����ֵ 
		Temp = top;//��ʱ���� 
		top = top->getPre();//��ջ��ջ����ǰ����Ϊջ�� 
		delete Temp;//����ջ�� 

		return t; 
	}
	//�õ�ջ�������� 
	T gettop(){
		T t = top->getData();
		return t;
	}
	//�������� 
	~mystack2(){
	//	cout<<"\nִ����������mystack2"<<endl; 
	
	//��ջ����Ϊ�� 
			while (top)
			{
				//ȡ��ջ���� 
				
				Temp = top;
				//����ջ�� 
				top = top->getPre();
				delete Temp;//����ջ�� 

			}

		

		//����ж� 
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
