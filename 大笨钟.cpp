#include<iostream>
using namespace std;

int main(){
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
	
	int len=hh-12;
	if(mm>0) len++;
	
	if(len<=0){
		printf("Only %02d:%02d.  Too early to Dang.\n",hh,mm);
	}else{
		while(len--){
			printf("Dang");
		}
	}
	
	return 0;
}
