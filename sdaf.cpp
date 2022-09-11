#include<iostream>
#include<fstream>
#include <string>
#include<sstream>
#include<stdlib.h>
#include<memory.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main1(void) {
	ofstream file("out.dat", ios::out);
	ifstream in("in.dat", ios::in);
	string str;
	const int num = 50;
	int nu = 0;
	int* strs = new int[10];
	stringstream ss;
	int aa = -1;
	if (in) {
		//while (getline(in, str, ' '))//读取一行 空格作为分隔 
		//{
		//	aa = -1;
		//	aa = stoi(str);
		//	strs[nu] = aa;
		//	nu++;
		//}
		while (in >> strs[nu++])
			//sort(strs, nu);
			sort(strs,strs+nu);
		if (file) {
			for (int i = 0; i < nu; i++) {
				file << strs[i] << " ";
			}
		}
	}
	delete strs;
	in.close();
	file.close();
	return 0;
}
