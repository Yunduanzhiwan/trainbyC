#include<iostream>
using namespace std;
/* 请在这里填写答案 */
/*
已知Pig类是MagicPig类的父类，
根据以下主函数完成上述两个类的定义，
以实现规定的输出。不允许改变主函数的内容。

Pig 申请了空间...
Pig 申请了空间...
MagicPig 申请了空间...

我只是个平凡的猪猪。
我能上树了耶！

Pig 释放了空间...
MagicPig 释放了空间...
Pig 释放了空间...

*/ 
class Pig{
	public:
		Pig(){
			cout<<"Pig 申请了空间..."<<endl;
		}
	virtual	void climb(){
			cout<<"我只是个平凡的猪猪。"<<endl;
		}
	virtual	~Pig(){
			cout<<"Pig 释放了空间..."<<endl;
		}
};
class MagicPig:public Pig{
	public:
		MagicPig(){
			cout<<"MagicPig 申请了空间..."<<endl;
		}
		void climb(){
			cout<<"我能上树了耶！"<<endl;
		}
		~MagicPig(){
			cout<<"MagicPig 释放了空间..."<<endl;
		}
};

int main()
{
	Pig *p1 = new Pig; 
	Pig *p2 = new MagicPig; 
	cout << endl; 
	
	p1->climb(); 
	p2->climb(); 
	cout << endl; 
	
	delete p1; 
	delete p2;  
	return 0;
}






//
//class Pig{
//	public:
//		Pig(){
//			cout<<"Pig 申请了空间..."<<endl;
//		}
//	virtual	void climb(){
//			cout<<"我只是个平凡的猪猪。"<<endl;
//		}
//	virtual	~Pig(){
//			cout<<"Pig 释放了空间..."<<endl;
//		}
//};
//class MagicPig:public Pig{
//	public:
//		MagicPig(){
//			cout<<"MagicPig 申请了空间..."<<endl;
//		}
//		void climb(){
//			cout<<"我能上树了耶！"<<endl;
//		}
//		~MagicPig(){
//			cout<<"MagicPig 释放了空间..."<<endl;
//		}
//};





