//10
//2
//14
//7
//8
//12
//15
//11
//0
//4
//1
//13
//3
//9
//6
//5

#include<stdio.h>
int arry[16]={10,2,14,7,8,12,15,11,0,4,1,13,3,9,6,5};
int main(){
	int v1,v2,v3,v4,v5,v6;
	scanf("%d %d",&v5,&v6);
	printf("v");
	v1=v5&0xF;
	v5=v1;
	if(v1==15){
		return 0;
	}
	v2=v3=0;
	do{
		++v3;
		v1=arry[v1];
		v2+=v1;
		printf("v2=%d\n",v2);
//		printf("v3=%d\n",v3);3
	}while(v1!=15);
	v5=15;
	printf("v2=%d\n",v2);
	printf("v3=%d\n",v3);
	if(v3!=15 || v6!=v2){
		return 0;
	}
	
	printf("ok");
	return 0;
}
