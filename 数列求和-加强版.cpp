/*
ϰ��2.3 �������-��ǿ�� (20 ��)
����ĳ����A��1��A��9���Լ��Ǹ�����N��0��N��100000����
������֮��S=A+AA+AAA+?+AA?A��N��A��������A=1, N=3ʱ��S=1+11+111=123��

�����ʽ��
��������A��Ǹ�����N��

�����ʽ��
�����N������֮��S��ֵ��

����������
1 3
���������
123

 9 
99



sum=9*2+9*1 ----> 9*2%10  9*1+(9*2/10)%10   

*/



#include<iostream>
using namespace std;
int ch[100002]={0}; 
int main() {
	int n, m,t;
	cin >> n >> m;
	if(m==0){//0����� 
		cout<<"0"<<endl;
		return 0;
	}
	int pre = 0;
	int ind = 0;
	for (int i = m; i >0; --i) {
		t = n * i+pre;
		ch[ind++] = (t  % 10);
		pre = t / 10;
	}
	if (pre)cout<<pre;
	for(int i=ind-1;i>=0;--i)cout<<ch[i];

	return 0;
}
