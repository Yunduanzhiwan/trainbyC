/*
ϰ��2.1 �򵥼����� (20 ��)
ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ:
������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ:
��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

��������:
1+2*10-10/2=
�������:
10

*/
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
stack<char> s;
int main() {
	int sum = 0;
	char ch;
	int td;
	scanf("%d", &td);
	sum = td;
	int flag = 1;
	while (1) {
		ch = getchar();
		if (ch == '=')break;
		scanf("%d", &td);
		switch (ch) {
		case '+':
			sum += td;
			break;
		case '-':
			sum -= td;
			break;
		case '*':
			sum *= td;
			break;
		case '/':
			if (td == 0) {
				cout << "ERROR" << endl;
				flag = 0;
				exit(0);
			}
			sum /= td;
			break;
		default:
			cout << "ERROR" << endl;
			exit(0);
		}


	}
	cout << sum << endl;

	return 0;
}

