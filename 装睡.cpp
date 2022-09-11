
#include<iostream>
#include<string.h>
using namespace std;

//正常人睡眠时的呼吸频率是每分钟15-20次，
//脉搏是每分钟50-70次。下面给定一系列人的呼吸频率与脉搏，
//请你找出他们中间有可能在装睡的人，即至少一项指标不在正常范围内的人。
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
