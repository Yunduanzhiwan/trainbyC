#include<iostream>
using namespace std;
/*
������ε�n �ĽǶ�


jiaodu=180*��n-2)/n 

*/
bool isDelta(int degree){
	double is=1.0*360/(180-degree);
	if((int)is==is){
		return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int degree;
	for(int i=0;i<n;++i){
		cin>>degree;
		if(isDelta(degree)){
			cout<<"YES\n"; 
		}
		else{
			cout<<"NO\n";
		}
	}
	
	return 0;
} 

/*
Emuskald������ũ����Χ��ҪΧ���������������Լ�������������������һ��Χ�����������ˡ� ��ϣ��դ����Ϊ������Ρ����������ŵ���·������դ��������ֻ���Ե����Ƕ�����դ���ǡ� �������ܹ�����Emuskald��Ҫ��Χ���𣿻��仰˵���Ƿ����������Σ���Ƕȵ��ڦ���
Input
��һ���������һ������t��0
Output
����ÿ�����ԣ�������С�YES�����������ţ�����������˿��Թ���Emuskald��Ҫ��դ�������ҡ�NO����û�����ţ�����������ܵĻ���
Examples
Input
3
30
60
90
Output
NO
YES
YES
Note
�ڵ�һ�����������У������ܹ���դ������Ϊû�д��Ƕȵ�������Ρ� �ڵڶ������������У�դ����һ���������Σ������һ��������������һ�������Ρ�

*/
