 #include<iostream>
 #include<string.h>
 using namespace std;
 int res[11]={0};
 int main(){
 	char n[1002] ;
 	scanf("%s",&n);
 	int len=strlen(n);
 	while(len--){
 		res[n[len]-'0']++;
	 }
	 for(int i=0;i<=9;++i){
	 	if(res[i]>0){
	 		printf("%d:%d\n",i,res[i]);
		 }
	 }
 	
 	return 0;
 }
