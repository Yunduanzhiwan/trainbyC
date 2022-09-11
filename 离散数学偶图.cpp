#include<iostream>
#include<string.h>
#include<sstream>
#include<stdlib.h>
#include<vector>
#include<set>
#include<ctime>
using namespace std;
#define random(x) rand()%(x)
string rows[50];
string cols[50];
int findrows(string s, string* res) {
	for (int i = 0; i < 50; ++i) {
		if (s == res[i]) {
			return i;
		}
	}
	return -1;
}
void printfrc(vector<vector<int>> res, string* a, int ai, string* b, int bi) {
	cout << " ";
	for (int i = 0; i < bi; ++i) {
		cout << " " << b[i];
	}
	cout << "\n---------------------\n";
	for (int i = 0; i < ai; ++i) {
		cout << a[i] << "|";
		for (int j = 0; j < bi; ++j) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}
vector<vector<int>> creat(int ro, int co) {
	vector<vector<int>> res(ro,vector<int>(co));
	string row, col,s;
	int a,b;
	cout << "输入匹配规则：\n";
	for (int i = 0; i < ro; ++i) {
		cout << "\n第 " << i +1<< " 个" << ":";
		cin >> row;
		a = findrows(row, rows);
		getline(cin, s);
		istringstream ss(s);
		while (ss >> s) {
			 b = findrows(s, cols);
				res[a][b] = 1;
		}
	}
	for (int i = 0; i < ro; ++i) {
		for (int j = 0; j < co; ++j) {
		cout << res[i][j] << " ";
	}
		cout << endl;
	}
	return res;
}
int* finddushu(vector<vector<int>> res,int cols) {
	int sizea = res.size();
	int* du = new int[cols];
	for (int i = 0; i < cols; ++i) {
		du[i] = 0;
	}
	for (int i = 0; i < sizea; ++i) {
		int sizeb = res[i].size();
		for (int j = 0; j < sizeb; ++j) {
			if (res[i][j] == 1) {
				du[j]++;
			}
		}
	}
	return du;
}
int findmin(int* a, int n) {
	int min;
	int* sui = new int[n];
	int num = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] > 0) {  //002 1 8 -1
			min = a[i];
			sui[0] = i;
			break;
		}
	}
	srand((int)time(0));
	for (int i = 0; i < n; ++i) {
		if (a[i] <= min && a[i] > 0&&i!=sui[0]) {
			if (a[i] == min) {
				++num;
				sui[num] = i;
			}
			else
			{
				min = a[i];
				sui[0] = i;
				num = 0;//重新归零
			}
		}
	}
	if (num == 0) {
		min = sui[0];
	}
	else
	{
		min = rand() % num + 1;
		min = sui[min];
	}
	delete[]sui;
	return min;
}

int main() {//int argc, char** argv
	string s;
	long time1, time2;
	int ai = 0;
	int bi = 0;
	cout << "输入第一个集合序列：";
	getline(cin, s);
	istringstream ss(s);
	while (ss >> s) {
		rows[ai++] = s;
	}
	cout << "\n输入第二个集合序列：";
	getline(cin, s);
	istringstream sss(s);
	while (sss >> s) {
		cols[bi++] = s;
	}
	time1 = clock();
	vector<vector<int>> res=creat(ai,bi);
	int* du = finddushu(res, bi);
	for (int i = 0; i < bi; ++i) {
		cout << du[i] << " ";
	}
	int size = res.size();
	int min;
	cout << endl;

	cout << "查询到的匹配集合如下:\n";
	srand((int)time(0));
	int sui;
	int* suiji = new int[ai];//随机匹配
	int num = 0;
	for (int i = 0; i < ai; ++i) {
		suiji[i] = 0;
	}
	for (int t = 0; t < bi; ++t) {
		cout << "\n-----------------------\n";
		cout << "开始第 " << t + 1 << " 个匹配" << endl;
		min = findmin(du, bi);
		num = 0;
		for (int i = 0; i < ai; ++i) {
			suiji[i] = 0;
		}
		for (int i = 0; i < size; ++i) {

			if (res[i][min] == 1 && min != -1) {
				suiji[num] = i;
				num++;
			}
		}
		if (num > 1) {
			sui = (rand() % (suiji[num] - suiji[0] + 1)) + suiji[0];//(rand() % (b-a+1))+ a  suiji[num]-suiji[0]+1
		}
		else {

			sui = suiji[0];
		}
		if (res[sui][min] == 1 && min != -1) {
			cout << rows[sui] << " " << cols[min] << endl;//输出该匹配
			for (int j = 0; j < bi; ++j) {//把该行全为0；
				res[sui][j] = 0;
			}
		}
		du[min] = 0;//避免找到的无法匹配
	}
/*
z a s c m
c x1 x2 s k g
z c x2 s g
a c k
s x1 x2 g
c c x2 g
m c x1 x2 g
*/


	time2 = clock();
	cout << "\n\n-----------------------\n\n";
	cout << "总共用时: " << time2 - time1 << " ms" << endl;
	delete[]du;
	return 0;
}
