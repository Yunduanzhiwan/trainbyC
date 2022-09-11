#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct Node *ProNode;
typedef int Elmentype;
struct Node{
	Elmentype Data;
	ProNode Next;
};
ProNode read(){
	ProNode head,temp,end;
	Elmentype data;
	
	head=temp=end=NULL;
	while(1){
		scanf("%d",&data);
		if(data==-1){
			
			break;
		}
		
	//	cout<<"data="<<data<<endl;
		temp=(ProNode)malloc(sizeof(struct Node));
		temp->Data=data;
		if(end!=NULL){
			end->Next=temp;
			end=temp;
			end->Next=NULL;
		}else{
			head=temp;
			head->Next=NULL;
			end=head;
		}
	}
	return head;
	
}
ProNode insert(ProNode List, Elmentype _Data){
	if(List==NULL){
		List=(ProNode)malloc(sizeof(struct Node));
		List->Data=_Data;
		List->Next=NULL;
		return List;
	}
	
	ProNode Head=List;
	while(List&&List->Next!=NULL){
		List=List->Next;
	}
	
	List->Next=(ProNode)malloc(sizeof(struct Node));
	List->Next->Data=_Data;
	List->Next->Next=NULL;
	
	return Head;
}

ProNode getList(ProNode List){
	ProNode tlist=List;
	List=List->Next;
//	cout<<"tlist->data"<<tlist->Data<<"\n";
	return tlist;
}
ProNode hebin(ProNode list1,ProNode list2){
	if(list1==NULL&&list2==NULL){
		return NULL;
	}
	
	
	ProNode head,Temp,end;
	head=Temp=end=NULL;
	//head=( (list1->Data)<(list2->Data)?getList(list1):getList(list2));
	
	if(list1->Data<=list2->Data){
		head=list1;
		list1=list1->Next;
	}else{
		head=list2;
		list2=list2->Next;
	}
	
	end=head;
	end->Next=NULL;
	while(list1&&list2){
		//Temp=( (list1->Data)<(list2->Data)?getList(list1):getList(list2));
		if((list1->Data)<=(list2->Data)){
			Temp=list1;
			list1=list1->Next;
		}else{
			Temp=list2;
			list2=list2->Next;
		}
		end->Next=Temp;
		end=Temp;
		end->Next=NULL;
	}
	while(list1){
		Temp=list1;
		list1=list1->Next;
		end->Next=Temp;
		end=Temp;
		end->Next=NULL;
	}
	while(list2){
		Temp=list2;
		list2=list2->Next;
		end->Next=Temp;
		end=Temp;
		end->Next=NULL;
	}
	

	
	
	return head;
	
}
int main(){
	ProNode head1,head2,head3;
	head1=head2=head3=NULL;
	
	
	head1=read();
	head2=read(); 
	//Elmentype t;
	
//	while(1){
//		scanf("%d",&t);
//		if(t==-1){
//			break;
//		}
//		head1=insert(head1,t);
//	}
//	
//
//
//	while(1){
//		scanf("%d",&t);
//		if(t==-1){
//			break;
//		}
//		head2=insert(head2,t);
//	}	
	
	


	head3=hebin(head1,head2);


	if(head3==NULL){
		cout<<"NULL"<<endl;
		return 0;
	}
	
	int falg=1;
	while(head3){
		if(falg){
			printf("%d",head3->Data);
			falg=0;
		}else{
			printf(" %d",head3->Data);
		}
		
		head3=head3->Next;
	}
	
	return 0;
} 
