
#include<iostream>
#include<string.h>
using namespace std;

//������˯��ʱ�ĺ���Ƶ����ÿ����15-20�Σ�
//������ÿ����50-70�Ρ��������һϵ���˵ĺ���Ƶ����������
//�����ҳ������м��п�����װ˯���ˣ�������һ��ָ�겻��������Χ�ڵ��ˡ�
int main(){
	int n;
	string name;
	int a,b;
	cin>>n;
	while(n--){
		cin>>name>>a>>b;
		if(a<15||a>20||b<50||b>70){
			cout<<name<<endl;
		}
	}

	return 0;
}
