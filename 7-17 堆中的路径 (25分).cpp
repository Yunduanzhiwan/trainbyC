#include <stdio.h>
#define MAX 1001	//���ڴ洢��ʱ�������1��ʼ������������1001�� 
#define MINH -10001
int nums[MAX];
int size=0;
void insert(int in){
	
	int i=++size;
	for(;in<nums[i/2];i/=2){
		nums[i]=nums[i/2];
	}
	nums[i]=in; 
}
int main(){
	 nums[0]=MINH;//�ڱ� 
	 int n,m,t,falg;
	 scanf("%d %d", &n, &m);
	 
	 for(int i=0;i<n;++i){
	 	
	 	scanf("%d", &t);
	 	insert(t);
	 }

	 while(m--){
	 	scanf("%d",&t);
	    falg=1;
	 	while(t){
	 		if(falg){
	 			falg=0;
			 	printf("%d",nums[t]);
			 }else printf(" %d",nums[t]);
	 		t/=2;
		 }
		 printf("\n");
	 }
	return 0;
} 
