#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
	char s;
	fstream iofile(argv[1], ios::in | ios::out | ios::binary);
	if (!iofile) {
		cout << "error";
		return 0;
	}
	fstream copyfile(argv[2], ios::out | ios::binary);
	char ch;
	while (iofile.get(ch)) {
		//	cout << s.name << " " << s.score << endl;
		copyfile.put(ch);
	}

	cout << "�ɹ�����һ���ļ�" << endl;
	copyfile.close();

	iofile.close();
	return 0;
}

