#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
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
	if (shu.fail()){
		shu.open("book.dat",ios::out | ios::binary);
		shu.close();
		shu.open("book.dat", ios::in | ios::out | ios::binary);
		if (shu.is_open()){
			cout << "�����ļ��ɹ�"<< endl;
		}
		else{
			cout << "���ļ�ʧ��" << endl;
			exit(0);
		}
	}
}
class Book{

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
	//	printf("ISBN��: %-5s  ����:��%-5s��   �۸�:%-3.lf Ԫ  ���: %lu ��\n", isbn, name, price, //nums);
		cout << "ISBN�룺" << setiosflags(ios::fixed) << setw(-5) << isbn << "   ������" << setw(-5) << name << "��";
		cout << "�۸�" << setw(-5)<<setprecision(2) << price << "  ��� " << setw(-5) << nums << " ��" << endl;
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

public:
	static unsigned long totalbooks;
	void addbook(){
		string isbn;
		string name;
		double price;
		unsigned long nums;
		cout << "�����鼮����Ϣ\n" << endl;;
		cout << "ISBN�룺";
		cin >> isbn;
		cout << "������";
		cin >> name;
		cout << "�۸�";
		cin >> price;
		cout << "��棺";
		cin >> nums;
		cout << endl;
		Book book(isbn, name, price, nums);
		totalbooks++;
		shu.seekp((totalbooks - 1)*sizeof(Book), ios::beg);
		shu.write((char*)&book, sizeof(Book));
		shu.flush();
		cout << "size = " << totalbooks << endl;
		cout << "��ӳɹ�" << endl;
	}
	void deletebook(){
		cout << "��������������isbn��:";
		string name;
		cin >> name;
		fstream shu1("temp.dat", ios::out | ios::binary|ios::trunc);//������������
	
		shu.seekg(0, ios::end);
	//	cout << "�鱾�� " << shu.tellg() / sizeof(Book) << endl;
		totalbooks = shu.tellg() / sizeof(Book);
		shu.seekg(0);
		for (int i = 0; i<totalbooks; ++i){
			Book book;
			shu.read((char*)&book, sizeof(Book));
			if (name == book.isbn || name == book.name){
				continue;
			}
			else{
				shu1.write((char*)&book, sizeof(Book));
			}
		}
		shu1.close();
		shu.close();
		fstream shu2("temp.dat");
		ofstream shu3("book.dat", ios::in | ios::binary|ios::trunc);
		for (int i = 0; i<totalbooks-1; ++i){
			Book book;
			shu2.read((char*)&book, sizeof(Book));
			shu3.write((char*)&book, sizeof(Book));
		}
		shu3.close();
		shu2.close();
		system("del temp.dat");
		init();
		cout << "ɾ���ɹ�" << endl;
		--totalbooks;
	}
	void deletel_all_book(){
		shu.close();
		system("del book.dat");
		init();
		cout << "ɾ���ɹ�" << endl;
		totalbooks = 0;
	}
	void show_one_book(){
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

	XS xs;
	shu.seekg(0, ios::end);
	xs.totalbooks = shu.tellg() / sizeof(Book);
	cout << "size= " << xs.totalbooks << endl;
	int ch;
	while (true)
	{
		cout << "-----------------------�˵�------------------------|" << endl;
		cout << "|               1.����鱾                         |" << endl;
		cout << "|               2.ɾ���鱾                         |" << endl;
		cout << "|               3.�޸��鼮                         |" << endl;
		cout << "|               4.�����鼮                         |" << endl;
		cout << "|               5.��ʾ�����鼮                     |" << endl;
		cout << "|               6.ɾ�������鼮                     |" << endl;
		cout << "|               7.���沢�˳�����                   | " << endl;
		cout << "|--------------------------------------------------|" << endl;
		cout << "����ѡ��:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			xs.addbook();
			cout << "�鱾����" << xs.totalbooks << endl;
			break;
		case 2:
			xs.deletebook();
			cout << "�鱾���� " << xs.totalbooks << endl;
			break;
		case 3:
			xs.cinbisn();
			break;
		case 4:
			xs.show_one_book();
			break;
		case 5:
			xs.showallbook();
			break;
		case 6:
			xs.deletel_all_book();
			cout << "�鱾���� " << xs.totalbooks << endl;
			break;
		case 7:
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
