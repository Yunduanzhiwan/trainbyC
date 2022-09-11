#include<iostream>
#include<string.h>
using namespace std;

int main(){
   string str="ILovePrograming";
   int len=str.length();
   for(int i=0;i<len-1;++i){
   		for(int j=0;j<i;++j){
   			//printf(" ");
   			cout<<" ";
		}
		cout<<str[i]<<endl;
//		printf((str[i]));
//		printf("\n"); 
   }
	for(int i=0;i<len-1;++i){
		cout<<" ";
	}
	cout<<str[len-1];
	return 0; 

} 
