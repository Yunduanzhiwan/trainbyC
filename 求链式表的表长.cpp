#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode List;

List Read(); /* ϸ���ڴ˲��� */

int Length( List L );

int main()
{
    List L = Read();
    printf("%d\n", Length(L));
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
List Read(){
	PtrToLNode head,node,end;
	head=node=NULL;
	
	head=(PtrToLNode)malloc(sizeof(PtrToLNode));
//	node=(PtrToLNode)malloc(sizeof(PtrToLNode));
	end=head;
	
	int num;
	while(scanf("%d",&num)!=EOF&&num!=-1){
		//cout<<"num="<<num<<endl;
//		printf("num= %d\n",num);
		
		node=(PtrToLNode)malloc(sizeof(PtrToLNode));
		
		node->Data=num;
		end->Next=node;
		end=node;
		end->Next=NULL;
	}
	return head;
}

int Length( List L ){
	
	int len=0;
	
	
	while(L->Next!=NULL){
		L=L->Next;
	//	printf("%d\n",L->Data);
		len++;
	} 
	return len;
} 
