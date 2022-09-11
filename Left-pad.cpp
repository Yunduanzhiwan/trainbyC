#include<iostream>
#include<string.h>
using namespace std;

int n;
char ch;
int main() {
	cin >> n >> ch;
	string str;
	getchar();
	//cin >> str;

	getline(cin, str);
	int len = str.size();
	if (len < n) {
		int size = n - len;
		while (size--) {
			cout << ch;
		}
		cout << str;
	}
	else {
		str = str.substr(len - n);
		cout << str << endl;

	}
	return 0;
}
