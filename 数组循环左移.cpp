/*

ϰ��2.2 ����ѭ������ (20 ��)
����Ҫ��ʵ��һ�����������ѭ�����Ƶļ򵥺�����
һ������a�д���n��>0�����������ڲ�����ʹ�����������ǰ���£�
��ÿ������ѭ��������m����0����λ�ã�����a�е������ɣ�a0a1an?1���任Ϊ��aman1a0a1am
����ǰ���m����ѭ������������m��λ�ã����������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����

�����ʽ:
�����1�и���������n����100��������m����0������2�и���n������������Կո�ָ���

�����ʽ:
��һ�������ѭ������mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�

����������
8 3
1 2 3 4 5 6 7 8
���������
4 5 6 7 8 1 2 3
*/

#include<iostream>
#include<string.h>
using namespace std;
int t;
void print(int* num, int n) {
	for (int i = 0; i < n-1; ++i) {
		cout << num[i] << " ";
	}
	cout << num[n-1]<<endl;
}
void remove(int* num, int n) {
	 t = *num;
	for (int i = 0; i < n-1; ++i)*(num+i) = *(num + i+1);
	*(num + n - 1) = t;
	//print(num, n);
}
void solve(int *num,int n,int m) {
	for (int i = 0; i < m; ++i)remove(num, n);
}

int main() {
	int n, m;
	cin >> n >> m;
	int* num = new int[n];
	memset(num, 0, sizeof(num));
	for (int i = 0; i < n; ++i) {
		cin >> num[i];
	}
	solve(num, n, m);
	print(num, n);

	return 0;
}
