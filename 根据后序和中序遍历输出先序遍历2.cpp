#include<iostream>
using namespace std;
#define MAX 500
int numh[MAX]={0};
int numz[MAX]={0};

typedef struct Btree{
	int date;
	struct Btree* lc;
	struct Btree* rc;
}Node,*Tree;

void cread(int *z,int *h,int len){
	if(len<=0)return;
	
	int *p=h;
	while(p){
		if(*p==*(p+len-1))break;
		++p
	}
	int len2=p-h;
	
}

