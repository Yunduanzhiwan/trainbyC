#include<iostream>
#include<fstream>
#include <string>
#include<sstream>
#include<stdlib.h>
#include<memory.h>
#include<cstring>
using namespace std;
void sort(int* p, int num) {//升序排序 
	for (int* i = p; i < p + (num - 1); i++) {
		for (int* j = i; j < p + num; j++) {
			if (*j < * i) {
				int t = *i;
				*i = *j;
				*j = t;
			}
		}
	}
}
int main(void) {
	ofstream file("out.txt", ios::out);
	ifstream in("in.txt", ios::in);
	string str;
	const int num = 50;
	int nu = 0;
	int *strs=new int[50];
	stringstream ss;
	int aa = -1;
	
	if (in) {
		while (getline(in, str,' '))//读取一行 空格作为分隔 
		{
			aa = -1;
			aa = stoi(str);
			strs[nu] = aa;
			nu++;
		}
		sort(strs, nu);
			if (file) {
				for (int i = 0; i < nu; i++) {
					file << strs[i]<<" ";
				}
			}
			else
			{
				cout << "false";
			}
	}
	delete strs;
	in.close();
	file.close();
	return 0;
}
