#include<iostream>
#include<stack>
#include <string>
#include<iomanip>
#include<sstream>
using namespace std;
stack <double> s;
bool ischar(char c) {
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
bool AllisNum(string str) {
	stringstream sin(str);
	double d;
	char c;
	if (!(sin >> d))
	{
		return false;
	}
	if (sin >> c)
	{
		return false;
	}
	return true;
}
double cal(double a, double b, char op){
    if (op == '-') return a-b;
    else if (op == '+') return a+b;
    else if (op == '*') return a*b;
    else if (b == 0){ 
        cout << "ERROR";
        exit(0);
    }
    return a/b;
}
int main(void) {
	string str;
	string ss[200];
	int nu = 0;
    int len;
    double a,t1,t2,res;
	getline(cin, str);
	istringstream iss(str);
	while (iss>>str) {
		ss[nu] = str;
		nu++;
	}
	len = nu;
	for (int i = len - 1; i >= 0; --i) {
		if(AllisNum(ss[i])){
			a = stod(ss[i]);
			s.push(a);
		}
		else if (ischar(ss[i][0])&& !isdigit(ss[i][1]))
		{
			t1 = s.top();
			s.pop();
			t2 = s.top();
			s.pop();
			switch (ss[i][0])
			{
			case '+':
				res = t1 + t2;
				s.push(res);
				break;
			case '-':
				res = t1 - t2;
				s.push(res);
				break;
			case '*':
				res = t1 * t2;
				s.push(res);
				break;
			case '/':
				if (t2 == 0) {
					printf("ERROR\n");
					//cout << "EROOR" << endl;
					exit(0);
				}
				res = t1 / t2;
				s.push(res);
				break;
			default:
				break;
			}
		}
	}
	if (!s.empty()) {
		res = s.top();
		printf("%.1lf\n", res);
	}
}


