#include<bits/stdc++.h>
using namespace std;


int main(){
	char c;
	char str[5005];
	scanf("%c",&c);
	scanf("%s",&str);
//	gets(str);
	
	int len=strlen(str);
	int res=0;
	for(int i=0;i<len;++i){
		if(str[i]==c){
			++res;
		}
	}
	printf("%d\n",res);
	
	return 0;
} 
