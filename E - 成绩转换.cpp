
#include<iostream>
using namespace std;

/*
输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下： 
90~100为A; 
80~89为B; 
70~79为C; 
60~69为D; 
0~59为E; 
对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
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
