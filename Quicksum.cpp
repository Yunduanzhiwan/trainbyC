//#include<iostream>
//#include<string.h>
//using namespace std;
//int main(void){
//	string s;
//	int res=0;
//	while(1){
//		getline(cin,s); 
//		if(s=="#"){
//			break;
//		}
//		res=0;
////		int len=s.length();
//		for(int i=0;s[i]!='\0';++i){
//			if(s[i]!=' '&&s[i]>64&&s[i]<90){
//			res+=(i+1)*(int(s[i])-'A'+1);
//			}
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//} 

#include <stdio.h>
int main(void){
	int i,res;
	char s[1000];
	gets(s);
	while (s[0]!='#'){
		res=0;
			for (i=0;s[i]!='\0';++i){
				if (s[i]!=' '){
					res+=(int)(s[i]-'A'+1)*(i+1);
				}
			}
		printf("%d\n",res);
		gets(s);
	}
	return 0;
}
