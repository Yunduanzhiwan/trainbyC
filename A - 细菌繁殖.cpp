#include<iostream>
#include<math.h>
using namespace std; 
int year[]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n;
	int m1,d1,m2,d2;//月份日期 
	long s,e;//开始的数量，结束的数量
	
	cin>>n;
	int days;
	while(n--){
		days=0;
		cin>>m1>>d1>>s>>m2>>d2;
		if(m1==m2){
			days=d2-d1;
		}
		else{
			days=year[m1-1]-d1+d2;
		
			for(int i=m1+1;i<m2;i++){
				days+=year[i-1];
			}
		}
	//	cout<<"days="<<days<<endl;
		e=pow(2,days)*s;
		cout<<e<<endl;
	} 
	
	return 0;
}
