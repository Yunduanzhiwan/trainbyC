#include<iostream>
#include<stdio.h> 
#include<string>
#include<fstream>
using namespace std;
const int MAX = 500;
/*
ÿ��ͼ�����Ϣ����ISBN�š����� �����ۡ������

����Ƴ�������������ͼ��ĳ�ʼ����¼�롢�޸ĵ��ۻ��桢�������ؼ��ֲ�ѯͼ��ȹ��ܡ�
ʵ�鲽��
1����дͼ����Ϣ��
2����дͼ�����۹���Ա
3����д�������еĺ�����ʵ�ֳ�ʼ���ݵ�¼�루д�ļ�����
4����д�������еĺ����������������ؼ���ʱ������������а����˹ؼ��ֵ�����ͼ����Ϣ��
5����д�������еĺ���������ISBN��ʱ�����޸Ĵ�ͼ��Ŀ�棨�򵥼ۣ�
6����д����������ʾ���˵��������û���ѡ�񣬵������۹���Ա����ش������ָ���Ĺ��ܣ�
7�����Գ���
*/
fstream shu;
void init(){
	shu.open("book.dat", ios::in | ios::out | ios::binary);
}
class Book{
	friend class XS;
public:
	string isbn;
	string name;
	double price;
	unsigned long nums;
	Book(){
	}
	Book(string isbn, string name, double price, unsigned long nums) :isbn(isbn),
		name(name), price(price), nums(nums){
	}
	void print(){
		printf("isbn:%-5s  ����:%-5s   �۸�:%-5.lf   ���:%lu\n", isbn, name, price, nums);
	}
	void rxiuprice(double price_){
		price = price_;
	}
	void rxiunums(unsigned long num){
		nums = num;
	}
};
int gethang(){
	int num = 0;
	shu.seekg(0, ios::end);
	num = shu.tellg() / sizeof(Book);
	return num;
}
class XS{//������ 
	Book p[MAX];
public:
	static unsigned long totalbooks;
	void addbook(){
		string isbn;
		string name;
		double price;
		unsigned long nums;
		cout << "�����鼮����Ϣ:" << endl;;
		cin >> isbn >> name >> price >> nums;
		Book book(isbn, name, price, nums);
		totalbooks++;
		shu.seekp((totalbooks - 1)*sizeof(Book), ios::beg);
		shu.write((char*)&book, sizeof(Book));
		shu.flush();
		cout << "size = " << totalbooks << endl;
		cout << "��ӳɹ�" << endl;
	}
	void showbook(){
		cout << "������������";
		string name;
		cin >> name;

		shu.seekg(0, ios::end);
		totalbooks = shu.tellg() / sizeof(Book);
		shu.seekg(0);
		for (int i = 0; i<totalbooks; ++i){
			Book book;
			shu.read((char*)&book, sizeof(Book));
			if (book.name == name){
				book.print();
			}
		}
	}
	void showallbook(){
		shu.seekg(0, ios::end);
		cout << "�鱾�� " << shu.tellg() / sizeof(Book) << endl;
		totalbooks = shu.tellg() / sizeof(Book);
		shu.seekg(0);
		for (int i = 0; i<totalbooks; ++i){
			Book book;
			shu.read((char*)&book, sizeof(Book));
			book.print();
		}		
	}
	void cinbisn(){
		shu.seekg(0, ios::end);
		int size = shu.tellg() / sizeof(Book);
		cout << "size=" << size << endl;
		string bisn;
		cout << "����ISBN�룺";
		cin >> bisn;
		Book book;
		shu.seekg(0);
		int  i = 0;
		for ( i= 0; i < size;++i)
		{
			shu.read((char*)&book, sizeof(Book));
				if (book.isbn == bisn){
					break;
				}
		}
		cout << "i=" << i << "book is " << book.isbn << "name =" << book.name << endl;
		cout << "1.�޸ĵ���\n2.�޸Ŀ��" << endl;
		int cina;
		cin >> cina;
		if (cina == 1){
			double prince = 0;
			cout << "�޸ĵ���Ϊ:";
			cin >> prince;
			book.rxiuprice(prince);
			shu.seekp(sizeof(Book)*i, ios::beg);
			shu.write((char*)&book, sizeof(Book));
			shu.flush();
			cout << "�޸ĵ��۳ɹ�" << endl;
		}
		else if (cina == 2){
			unsigned long nums;
			cout << "�޸Ŀ��Ϊ:";
			cin >> nums;
			book.rxiunums(nums);
			shu.seekp(sizeof(Book)*i, ios::beg);
			shu.write((char*)&book, sizeof(Book));
				shu.flush();
			cout << "�޸Ŀ��ɹ�" << endl;
		}
		else
		{
			cout << "������󲻷����޸�" << endl;
		}
	}
};
unsigned long XS::totalbooks = 0;

int main(){
	init();
	if (shu.fail()){
		cout << "���ļ�ʧ��" << endl;
		exit(0);
	}
	XS xs;
	shu.seekg(0, ios::end);
	xs.totalbooks = shu.tellg() / sizeof(Book);
	cout << "size= " << xs.totalbooks << endl;
	int ch;
	while (true)
	{
		cout << "-----------------------�˵�------------------------|" << endl;
		cout << "|               1.����鱾                         |" << endl;
		cout << "|               2.�޸��鼮                         |" << endl;
		cout << "|               3.�����鼮                         |" << endl;
		cout << "|               4.��ʾ�����鼮                     |" << endl;
		cout << "|               5.���沢�˳�����                   | " << endl;
		cout << "|--------------------------------------------------|" << endl;
		cout << "����ѡ��:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			xs.addbook();
			cout << "size= " << xs.totalbooks << endl;
			break;
		case 2:
			xs.cinbisn();
			break;
		case 3:
			xs.showbook();
			break;
		case 4:
			xs.showallbook();
			break;
		case 5:
			shu.flush();
			shu.close();
			return 0;
		default:
			break;
		}
	}
	shu.close();
	return 0;
}
