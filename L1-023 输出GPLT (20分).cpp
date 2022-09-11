#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::toupper);

 	int l= s.length();
	int ch[4]={0};
	char cc[4]={'G','P','L','T'};
	for(int i=0;i<l;++i){
		switch(s[i]){
			case 'G':
				ch[0]++;
				break;
			case 'P':
				ch[1]++;
				break;
			case 'L':
				ch[2]++;
				break;
			case 'T':
				ch[3]++;
				break;
			default:
				break;
		}
	}
	int falg=1;
	while(falg){
		falg=0;
		for(int i=0;i<4;++i){
			if(ch[i]){
				ch[i]--;
				cout<<cc[i];
				falg=1;
			}
		}
		
	}
	


	
	
	return 0;
} 
