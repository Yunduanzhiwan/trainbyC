#include<iostream>
using namespace std;
/* ����������д�� */
/*
��֪Pig����MagicPig��ĸ��࣬
���������������������������Ķ��壬
��ʵ�ֹ涨�������������ı������������ݡ�

Pig �����˿ռ�...
Pig �����˿ռ�...
MagicPig �����˿ռ�...

��ֻ�Ǹ�ƽ��������
����������Ү��

Pig �ͷ��˿ռ�...
MagicPig �ͷ��˿ռ�...
Pig �ͷ��˿ռ�...

*/ 
class Pig{
	public:
		Pig(){
			cout<<"Pig �����˿ռ�..."<<endl;
		}
	virtual	void climb(){
			cout<<"��ֻ�Ǹ�ƽ��������"<<endl;
		}
	virtual	~Pig(){
			cout<<"Pig �ͷ��˿ռ�..."<<endl;
		}
};
class MagicPig:public Pig{
	public:
		MagicPig(){
			cout<<"MagicPig �����˿ռ�..."<<endl;
		}
		void climb(){
			cout<<"����������Ү��"<<endl;
		}
		~MagicPig(){
			cout<<"MagicPig �ͷ��˿ռ�..."<<endl;
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
//			cout<<"Pig �����˿ռ�..."<<endl;
//		}
//	virtual	void climb(){
//			cout<<"��ֻ�Ǹ�ƽ��������"<<endl;
//		}
//	virtual	~Pig(){
//			cout<<"Pig �ͷ��˿ռ�..."<<endl;
//		}
//};
//class MagicPig:public Pig{
//	public:
//		MagicPig(){
//			cout<<"MagicPig �����˿ռ�..."<<endl;
//		}
//		void climb(){
//			cout<<"����������Ү��"<<endl;
//		}
//		~MagicPig(){
//			cout<<"MagicPig �ͷ��˿ռ�..."<<endl;
//		}
//};





