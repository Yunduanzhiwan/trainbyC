/**
构建栈，并完善栈的各项操作，

1，判空
2，判断栈的长度，
3.插入，取出
4.栈顶的元素 
5.是否有最长度元素 


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
		//初始化 
		mystack(){
			top=-1;
			maxn=100;//默认栈的最多100个元素 
			//分配数组内存 //销毁要用delete data 
			data=new T(maxn);
			memset(data,0,sizeof(data));//初始化数组 
		}
		//判断栈是否为空，若栈顶为-1，为空，否则为真 
		bool isEmpty(){
			return top==-1;
		}
		//判断是否 
		bool isFull(){
			return top==maxn-1;//如果栈现在是99 0-99为100个，满了 
		}
		//压入元素到栈，压栈 
		bool push(T temp){
			//如果栈未满则压栈 ，返回真，否则假 
			if(top<maxn){
				data[++top]=temp;
				return true;
			}
			return false;
		}
		//出栈 
		T pop(){
			T t=data[top];
			data[top]=0;//改未初始化 
			top--;//栈顶减1 
			return t;
		}
		//单纯得到栈顶数值 
		T gettop(){
		//	cout<<"gettop="<<data[top]<<endl;
			T t=data[top];
			return t;
		}
		//栈中有多少个元素 
		int length(){
			return top+1;//栈顶的下标就是个数-1 
		} 
		~mystack(){
			delete data;
		}
};
int main(){
	mystack<int> s;
	cout<<s.isEmpty()<<endl;//判断是否未空 
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

