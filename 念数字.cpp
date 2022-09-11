/*
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu

*/ 

#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
string nums[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
	string str;
	cin>>str;
	
	int len=str.length();
	int falg=1;
	for(int i=0;i<len;++i){
		if(str[i]!='-'&&str[i]>='0'&&str[i]<='9'){
			if(falg){
				cout<<nums[str[i]-'0'];
				falg=0;
			}
			else
				cout<<" "<<nums[str[i]-'0'];
		}else if(str[i]=='-'){
			if(falg){
				cout<<"fu";
				falg=0;
			}
			else
				cout<<" fu";
				
		}
	}
	return 0;
} 


