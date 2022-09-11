#include<iostream>
using namespace std;
//typedef struct Node* ProNode;
typedef int Elmentype;
//struct Node{
//	Elmentype Data;
//	ProNode Next;
//};

Elmentype Swap(Elmentype &a,Elmentype &b){
	Elmentype t=a;
	a=b;
	b=t;
}
Elmentype FindKthmax(Elmentype List[],int left,int right,int K){
	Elmentype e=List[left];
	
	int L=left;
	int R=right;
//	cout<<"---------------\n";
	while(1){
		while(L<=R&&e<=List[L]) L++;
		while(L<R&&e>List[R]) R--;
	//	cout<<"L="<<L<<" R="<<R<<endl;
		if(L<R){
			Swap(List[L],List[R]);
		}else{
			break;
		}
	}
	
	
	
	
	Swap(List[left],List[L-1]);
	
//	for(int i=left;i<right;++i){
//		cout<<List[i]<<" ";
//	}
//	cout<<endl;
	
	if((L-left-1)>=K)
		return FindKthmax(List,left,L-2,K);
	else if((L-left-1)<(K-1)){
		return FindKthmax(List,R,right,K-(L-left-1)-1);
	}else{
		return e;
	}
	
	
} 


int main(){
	
	Elmentype list[]={2,0,3,45,6,7,5};
	Elmentype res=FindKthmax(list,0,7,4);
	cout<<res<<endl;
	
	return 0;
} 
