#include<stdio.h>

int fun4(int a,int b,int c){
	int res=((c-b)/2+b);
	if(a==res){
		return res;
	}
	else if(a>res){
		return res+fun4(a,res+1,c);
	}
	else{
		return res+fun4(a,b,res-1);
	}
	
} 

int main(){
	int t;
	for(int i=0;i<=14;++i){
		t=fun4(i,0,14);
		printf("i=%d a=%d\n",t,i);
//		if(t==fun4(i,0,14)){
//			printf("a=%d\n",i);
//			break;
//		}
	}
	
	return 0;
}
