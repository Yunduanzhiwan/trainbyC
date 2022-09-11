/**
����ջ��������ջ�ĸ��������

1���п�
2���ж�ջ�ĳ��ȣ�
3.���룬ȡ��
4.ջ����Ԫ�� 
5.�Ƿ������Ԫ�� 


*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
template<class T>
class mystack{
	private:
		int top;
	    int maxn;
		T *data;
	public:
		//��ʼ�� 
		mystack(){
			top=-1;
			maxn=100;//Ĭ��ջ�����100��Ԫ�� 
			//���������ڴ� //����Ҫ��delete data 
			data=new T(maxn);
			memset(data,0,sizeof(data));//��ʼ������ 
		}
		//�ж�ջ�Ƿ�Ϊ�գ���ջ��Ϊ-1��Ϊ�գ�����Ϊ�� 
		bool isEmpty(){
			return top==-1;
		}
		//�ж��Ƿ� 
		bool isFull(){
			return top==maxn-1;//���ջ������99 0-99Ϊ100�������� 
		}
		//ѹ��Ԫ�ص�ջ��ѹջ 
		bool push(T temp){
			//���ջδ����ѹջ �������棬����� 
			if(top<maxn){
				data[++top]=temp;
				return true;
			}
			return false;
		}
		//��ջ 
		T pop(){
			T t=data[top];
			data[top]=0;//��δ��ʼ�� 
			top--;//ջ����1 
			return t;
		}
		//�����õ�ջ����ֵ 
		T gettop(){
		//	cout<<"gettop="<<data[top]<<endl;
			T t=data[top];
			return t;
		}
		//ջ���ж��ٸ�Ԫ�� 
		int length(){
			return top+1;//ջ�����±���Ǹ���-1 
		} 
		~mystack(){
			delete data;
		}
};
int main(){
	mystack<int> s;
	cout<<s.isEmpty()<<endl;//�ж��Ƿ�δ�� 
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
	return 0;
}

