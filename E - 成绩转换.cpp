
#include<iostream>
using namespace std;

/*
����һ���ٷ��Ƶĳɼ�t������ת���ɶ�Ӧ�ĵȼ�������ת���������£� 
90~100ΪA; 
80~89ΪB; 
70~79ΪC; 
60~69ΪD; 
0~59ΪE; 
����ÿ���������ݣ����һ�С�����������ݲ���0~100��Χ�ڣ������һ�У���Score is error!����
*/
int main(){
	int t;
	while(cin>>t){
		if(t<0||t>100){
			cout<<"Score is error!"<<endl;
			continue;
		}
		
		if(t>=90){
			cout<<"A"<<endl;
		}else if(t>=80){
			cout<<"B"<<endl;
		}else if(t>=70){
			cout<<"C"<<endl;
		}else if(t>=60){
			cout<<"D"<<endl;
		}else{
			cout<<"E"<<endl;
		}
		
	}
	
	
	return 0;
}
