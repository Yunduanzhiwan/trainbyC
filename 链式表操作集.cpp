#include <stdio.h>
#include <stdlib.h>

#define ERROR NULL
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

Position Find( List L, ElementType X );
List Insert( List L, ElementType X, Position P );
List Delete( List L, Position P );

List Reverse(List L);

int main()
{
    List L;
    ElementType X;
    Position P, tmp;
    int N;

    L = NULL;
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        L = Insert(L, X, L);
        if ( L==ERROR ) printf("Wrong Answer\n");
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else {
            L = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if ( L==ERROR )
                printf("Wrong Answer or Empty List.\n");
        }
    }
    L = Insert(L, X, NULL);
    if ( L==ERROR ) printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    tmp = Insert(L, X, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    tmp = Delete(L, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    for ( P=L; P; P = P->Next ) printf("%d ", P->Data);
    return 0;
}

/* 你的代码将被嵌在这里 */

Position Find( List L, ElementType X ){
	List T=L;
	while(T){
		if(T->Data==X){
			return T;
		}
		T=T->Next;
	}
	return ERROR;
} 
List Insert( List L, ElementType X, Position P ){
	List T=L;
	
								                                                                                 
	if(T==P){
		T=(List)malloc(sizeof(struct LNode));
		T->Data=X;
		T->Next=P;
		return T;
	}
	
	while(T&&T->Next!=P){//首先T不为NULL  T&&T->Next 顺序不能换 
		T=T->Next;
	}
	
	
	if(T){
		
		T->Next=(List)malloc(sizeof(struct LNode));
		T->Next->Data=X;
		T->Next->Next=P;
		return L;
		
	}
	printf("Wrong Position for Insertion\n");
	return ERROR;
	
}
List Delete( List L, Position P ){
	
	
	if(L==P){
		L=L->Next;
		free(P);
		return L;
	}
	
	List T=L;
	while(T&&T->Next!=P){
		
		T=T->Next;
	}
	
	if(T){
		T->Next=P->Next;
			
		free(P);
			
		return L;
	}
	printf("Wrong Position for Deletion\n");
	return ERROR;
	
}

List Reverse(List L){
	
	//逆转单向链表 
	List Old,New,Temp;
	Old=L;
	New=NULL;
	while(Old){
		Temp=Old->Next;
		Old->Next=New;
		New=Old;
		Old=Temp;
	}
	L=New;
	return L;
}
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
// 
//
//#define ERROR NULL
//
//typedef int ElementType;
//
//typedef struct LNode *PtrToLNode;
//
//struct LNode {
//
//    ElementType Data;
//
//    PtrToLNode Next;
//
//};
//
//typedef PtrToLNode Position;
//
//typedef PtrToLNode List;
//
// 
//
//Position Find( List L, ElementType X );
//
//List Insert( List L, ElementType X, Position P );
//
//List Delete( List L, Position P );
//
// 
//
//int main()
//
//{
//
//    List L;
//
//    ElementType X;
//
//    Position P, tmp, g;
//
//    int N;
//
// 
//
//    L = NULL;
//
//    scanf("%d", &N);
//
//    while ( N-- )
//
//	{
//
//        scanf("%d", &X);
//
//        L = Insert(L, X, L);
//
//        if ( L==ERROR )
//
//		printf("Wrong Answer\n");
//
//    }
//
//    scanf("%d", &N);
//
//    while ( N-- ) {
//
//        scanf("%d", &X);
//
//        P = Find(L, X);
//
//        if ( P == ERROR )
//
//            printf("Finding Error: %d is not in.\n", X);
//
//        else {
//
//            L = Delete(L, P);
//
//            printf("%d is found and deleted.\n", X);
//
//            if ( L==ERROR )
//
//                printf("Wrong Answer or Empty List.\n");
//
//        }
//
//    }
//
//    L = Insert(L, X, NULL);
//
//    if ( L==ERROR ) printf("Wrong Answer\n");
//
//    else
//
//        printf("%d is inserted as the last element.\n", X);
//
//    P = (Position)malloc(sizeof(struct LNode));
//
//    tmp = Insert(L, X, P);
//
//    if ( tmp!=ERROR ) printf( "Wrong Answer\n" );
//
//    tmp = Delete(L, P);
//
//    if ( tmp!=ERROR ) printf( "Wrong Answer\n" );
//
//    for ( P=L; P; P = P->Next ) printf("%d ", P->Data);
//
//    return 0;
//
//}
//
// 
//
///* 你的代码将被嵌在这里 */
//
//Position Find( List L, ElementType X )
//
//{
//
//	List T = L;
//
//	if(!L)
//
//	return ERROR;
//
//	while(T)
//
//	{
//
//		if( T->Data==X )
//
//		return T;
//
//		T = T->Next;
//
//	}
//
//	return ERROR;
//
//}
//
//List Insert( List L, ElementType X, Position P )
//
//{
//
//	List T = L;
//
//    if( T==P )//第一次进入的时候相当于建表，和后面的插入不一样。 
//	{
//
//	    T = (List)malloc(sizeof(struct LNode));	
//	
//		T->Data = X;
//	
//		T->Next = P;
//	
//		return T;
//	}
//
//	while( T&&T->Next!=P )  
//
//	T = T->Next;
//
//	
//
//	if(T)
//
//	{
//
//	    T->Next = (List)malloc(sizeof(struct LNode));
//	
//	    T->Next->Data = X;
//	
//	    T->Next->Next = P;
//	
//	    
//	
//		return L;
//
//	} 
//	printf( "Wrong Position for Insertion\n" );
//
//	return ERROR;
//
//
//}
//
// 
//
//List Delete( List L, Position P )
//
//{
//
//	if( L==P )
//
//	{ 
//
//	List T=L;
//
//	L = L->Next;
//
//	free(T);
//
//	return L;
//
//	}	
//
//	List H = L;	
//
//    while(L&&L->Next!=P)
//
//        L = L->Next;
//
//    if(!L)
//
//    {
//
//    printf( "Wrong Position for Deletion\n" );
//
//    return ERROR;
//
//    }
//
//    
//
//	L->Next = P->Next;
//
//	free(P);
//
//	
//
//	return H;
//
//}

