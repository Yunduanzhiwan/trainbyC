#include<iostream>
#include<map>
using namespace std;
 map<char,int> p;//天气  0-q-晴朗  1-g-高温 2-s-沙尘暴 
char weather[31];

int start=0;//开始天数 
int end=30;

int FuMax=1200;//负重上限
int SMoney=10000;//初始资金
int JCSY=1000;//基础收益
 
int UseWeater[3]={5,8,10};
int UseFood[3]={7,6,10};


int priceWeater=5;
int priceFood=10;

//拥有的水和食物 
int HasWeater=0;
int HasFood=0;

//停留 ，消耗 
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
 	cout<<"输入30天的天气："<<endl;
 	for(int i=0;i<30;++i){
 		cin>>weather[i];
	 }
}

bool Wa(int *day){
	
}

int main(){
	
	return 0;
}

 
