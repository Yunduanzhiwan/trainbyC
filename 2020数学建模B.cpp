#include<iostream>
#include<map>
using namespace std;
 map<char,int> p;//����  0-q-����  1-g-���� 2-s-ɳ���� 
char weather[31];

int start=0;//��ʼ���� 
int end=30;

int FuMax=1200;//��������
int SMoney=10000;//��ʼ�ʽ�
int JCSY=1000;//��������
 
int UseWeater[3]={5,8,10};
int UseFood[3]={7,6,10};


int priceWeater=5;
int priceFood=10;

//ӵ�е�ˮ��ʳ�� 
int HasWeater=0;
int HasFood=0;

//ͣ�� ������ 
bool Ting(int* day){
	if((*day)>=29){
		return false;	
	}
	HasWeater--;
	HasFood--;
	(*day)++;
	return true;
}

void Init(){
 	p['q']=0;
 	p['g']=1;
 	p['s']=2;
 	cout<<"����30���������"<<endl;
 	for(int i=0;i<30;++i){
 		cin>>weather[i];
	 }
}

bool Wa(int *day){
	
}

int main(){
	
	return 0;
}

 
