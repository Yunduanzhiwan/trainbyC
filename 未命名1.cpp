//
#include<iostream>
using namespace std;
char* A; 
int findindex(const char* from, char c, int n) {
	int index = 0;
	for (const char* i = from; i < from + n; i++) {
		if (c == *i) {
			break;
		}
		index++;
	}
	return index;
}
int** getE(int num) {
	//int** res = new int[num];
	int** res = new int* [num];
	for (int i = 0; i < num; i++) {
		res[i] = new int[num];

	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; ++j) {
			if (i == j) {
				res[i][j] = 1;
			}
			else {
				res[i][j] = 0;
			}
		}
	}
	return res;
}

int** getMR(int** arr, int num) {
	int** res = new int* [num];
	for (int i = 0; i < num; i++) {
		res[i] = new int[num];

	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; ++j) {
			res[i][j] = 0;
		}
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; ++j) {
			if (arr[i][j] == 1) {
				res[j][i] = 1;
			}
		}
	}
	return res;
}
void printarr(char* A, int** array, int num) {
	printf("  ");
	for (int i = 0; i < num; i++) {
		printf(" %c", A[i]);
	}
	printf("\n   ");
	for (int i = 0; i < num; i++) {
		printf("--");
	}
	printf("\n");
	for (int i = 0; i < num; i++) {
		printf("%c| ", A[i]);
		for (int j = 0; j < num; j++) {
			//cout << array[i][j] << " ";
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
void initarr(int **array,int num){
	for (int i = 0; i < num; i++) {
		array[i] = new int[num];
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			array[i][j] = 0;
		}
	}	
} 

int** getchengf(int** arr1,int **arr2 ,int num) {

	int** res = new int* [num];
	for (int i = 0; i < num; i++) {
		res[i] = new int[num];

	}
initarr(res,num); 
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; ++j) {
			res[i][j] = 0;
		}
	}
		for(int i=0;i<num;i++){
			for(int j=0;j<num;j++){
				int sum=0;
			//	[i][j]
				for(int k=0;k<num;k++){
					sum+=arr1[i][k]*arr2[k][j];
				}
		
				if(sum>0){
					res[i][j]=1;
				}
					
				else if(sum==0){
					res[i][j]=0;
				}
			}
		
		}
	return res;
}
int ** getadd(int **a,int **b,int numa,int numb=0){
	int num;
	if(numb=0)
		numb=numa;
	if(numa>numb)
		num=numa;
	else if(numa<numb)
		num=numb;
	else if(numa=numb)
		num=numa;
		
	int **res=new int *[num];
	initarr(res,num);
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(a[i][j]==0&&b[i][j]==0){
				res[i][j]=0;
			}
			else if(a[i][j]==1||b[i][j]==1){
				res[i][j]=1;
			}
		}
	}
	return res;
}

void del(int ** i,int num){
	
	for(int k=0;k<num;k++){
		delete i[k];
	}
	delete i;
}
int main(void) {
	//freopen("in.txt","r",stdin); 
	int num;
	cin >> num;
	getchar();

	A = new char[num + 1];
	for (int i = 0; i < num; i++) {
		scanf("%c", &A[i]);
		getchar();
	}

	int** array = new int* [num];
	initarr(array,num); 

	char x, y;
	while (1) {
		scanf("%c %c", &x, &y);
		getchar();

		if (x == '0') {
			break;
		}
		int x1 = findindex(A, x, num);
		int y1 = findindex(A, y, num);
		if (x1 >= 0 && x1 < num && y1 >= 0 && y1 < num) {
			array[x1][y1] = 1;
		}
		else {
			array[x1][y1] = 0;
		}
	}



	int **arr2=getE(num);
//	printf("R\n");
//	printarr(A, array, num);
	int **arr6=getchengf(array,array,num);
//	printf("R2\n");
//	printarr(A, arr6, num);

	int **arr7=getchengf(array,arr6,num);
//	printf("R3\n");
//	printarr(A, arr7, num);
	
	int **arr8=getchengf(array,arr7,num);
//	printf("R4\n");
//	printarr(A, arr8, num);





	///mr
	int **arr3=getadd(array,arr2,num);
	printf("M(r)\n");
	printarr(A, arr3, num);
	
	//ms----------------
	int **arr4=getMR(array,num);
	int **arr5=getadd(array,arr4,num);
	printf("M(s)\n");
	printarr(A, arr5, num);

	//mt
	int **arr9=getadd(array,arr6,num);
	int **arr10=getadd(arr9,arr7,num);
	
	printf("M(t)\n");
	printarr(A, arr10, num);


	del(arr2,num);
	del(arr3,num);
	del(arr4,num);
	del(arr5,num);
	del(arr6,num);
	del(arr7,num);
	del(arr8,num);
	del(arr9,num);
	del(arr10,num);
	del(array,num);

	
	delete A;
	return 0;
}
////
//#include<stdio.h>
//int set[1002];
//int cont[1002];
//int findindx(int a){
//	if(set[a]!=a){
//		set[a]=findindx(set[a]);
//		
//	}
//	return set[a];
//}
//void join(int a,int b){
//	int a1=findindx(a);
//	int b1=findindx(b);
//	if(a1!=b1){
//		set[a1]=b1;
//		cont[b1]+=cont[a1];
//	}
//}
//int main(void){
//	int n,m;//n 总共城市，M条路 
//	int a,b;// a-b 之间有一条路 
//	int t;
//	while(1){
//		scanf("%d %d",&n,&m);
//		if(n==0&&m==0){
//				break;
//		}
//		for(int i=0;i<n;i++){
//			set[i]=i;
//			cont[i]=1;
//		} 
//	
//		for(int i=0;i<m;i++){
//			
//			scanf("%d",&t);
//			scanf("%d",&a);
//			for(int j=1;j<t;++j){
//				scanf("%d",&b);
//				join(a,b);
//			}
//		}
//		printf("%d\n",cont[findindx(0)]);
//		
//		
//	}
//	return 0;
//} 
