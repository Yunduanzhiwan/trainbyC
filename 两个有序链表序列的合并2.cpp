/*
3 ���������������еĺϲ� (20��)

��֪�����ǽ�����������S1��S2����ƺ��������S1��S2�ϲ�����µķǽ�������S3��
�����ʽ:

��������У��ֱ���ÿ�и��������ɸ����������ɵķǽ������У���?1��ʾ���еĽ�β��?1������������У��������ÿո�����
�����ʽ:

��һ��������ϲ����µķǽ����������ּ��ÿո�ֿ�����β�����ж���ո���������Ϊ�գ����NULL��
��������:

1 3 5 -1
2 4 6 8 10 -1

�������:

1 2 3 4 5 6 8 10
*/ 

#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct IN {
	int date;
	struct IN* next;
}in;
void pr(in *head){
	in *y=head;
	while(y->next!=NULL){
		y=y->next;
        if(y->next==NULL){
            cout<<y->date;
        }else{
            cout<<y->date<<" ";
        }
		
	}
} 
void cins(in *end,in *node) {
	int n;
	cin >> n;
	while (n != -1) {
		
		node = (in*)malloc(sizeof(in));
		node->date = n;
		end->next = node;
		end = node;
		cin >> n;
	}
	end->next= NULL;
}
in * sort(in *a ,in *b){
//	pr(a);
//	cout<<endl;
//	pr(b);
	
	in *ha=a;
	in *hb=b;
	in *head,*node,*end;
	head=(in *)malloc(sizeof(in));
	end=head;
	in *ta,*tb;
	
		ta=a;
		tb=b;
//		pr(ta);
//		cout<<endl;
//		pr(tb);
		ta=ta->next;
		tb=tb->next;
	while(ta!=NULL&& tb!=NULL){
		

//		cout<<endl;
//		cout<<"ta->date "<<ta->date;
//		cout<<endl;
//		cout<<"tb->date "<<tb->date;
//		cout<<endl;
		//node=(in  *)malloc(sizeof(in));
	//	(ta->date)>(tb->date)?(tb->next=ta):(ta->next=tb);
		if((ta->date)>(tb->date)){
		//	tb->next=ta;
			end->next=tb;
			end=tb;
			tb=tb->next; 
		}else{
	//		ta->next=tb;
			end->next=ta;
			end=ta;
			ta=ta->next;
		}
			
	}
	if(ta!=NULL||tb!=NULL){
		if(ta!=NULL){
			
			end->next=ta;
		}else if(b!=NULL){
			
			end->next=tb;
		}
	}
	a=ha;
	b=hb;
//	pr(a);
//	cout<<endl;
//	pr(b);
//	cout<<endl;
//	pr(head);
    if(head->next!=NULL){
        return head;
    }
    else{
        return NULL;
    }
	
	
}

int main(void) {
	in *head, * end, * node;
	in* head1, * end1, * node1;
	head = (in*)malloc(sizeof(in));
	end = head;
	head1 = (in*)malloc(sizeof(in));
	end1 = head1;
	int n;
	for (int i = 0; i < 2; i++) {
		
		if (i == 0) {
			cins(end, node);
		}
		else
		{
			cins(end1, node1);
		}
	}
	
    if(head->next==NULL&&head1->next==NULL){
        cout<<"NULL";
    }else{
    	in *head3=sort(head,head1);
        pr(head3);
    }
	
	
	getchar();
		return 0;
}
