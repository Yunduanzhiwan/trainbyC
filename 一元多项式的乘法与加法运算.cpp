//#include<iostream>
//#include<stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//using namespace std;
//int a[1005],b[1005],c[3000];//��ɻ�����µ�����//ָ��������ֵ��Ϊ������1000��������
//void addp(){
//	int num=0;
//	for(int i=0;i<=1003;i++){
//		c[i]=a[i]+b[i];
//		if(c[i]!=0)
//			num++;
//		
//	}
//	int first=0;
//	if(num!=0){
//		for(int i=1003;i>=0;i--){
//			if(c[i]){
//				if(!first){
//					cout<<c[i]<<" "<<i;
//					first=1;
//				}else{
//					cout<<" "<<c[i]<<" "<<i;
//				}
//				
//			}
//		}
//		cout<<endl;
//	}else{
//		cout<<"0 0"<<endl;
//	}
//	
//} 
//
//void chengji(){
//	memset(c,0,sizeof(c));
//	int i,j;
//	int t = 0;
//	for(i = 0; i < 1005; i++){
//		if(a[i]!=0){
//			for(j = 0; j < 1005; j++){
//				if(b[j]!=0){
//					c[i+j] += a[i]*b[j]; //ֱ�ӱ������ɣ�ע��������+=������=����Ϊ������˿��ܳ���ָͬ���Ĳ��ܸ���ֻ�����
//					if(c[i+j]!=0)t++;//ͬ��
//				}
//			}
//		}
//	}
//	if(t==0){
//		printf("0 0\n");
//		return ;//�����ʽ����
//	}
//	int flag = 0;
//	for(i = 2005; i >=0; i--){
//		if(c[i]!=0){//��Ϊ�����
//		    if(!flag){
//		    	cout<<c[i]<<" "<<i;
//			   
//			   flag = 1;
//		    }
//		    else{
//		    	cout<<" "<<c[i]<<" "<<i;
//			}
//		       
//	    }
//	}
//	putchar('\n');
//	return ;
//}
//int main(void){
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
//	memset(c,0,sizeof(c));
//	int n;
//	cin>>n;
//	int x,y;//xΪϵ����yΪָ��  
//	for(int i=0;i<n;i++){
//		cin>>x>>y;
//		a[y]=x;
//	}
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>x>>y;
//		b[y]=x;
//	}
//	chengji();//�������
//	addp();//�������
//	
//	return 0;
//}


#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int Max=1002;
int a[Max];

int b[Max];

int c[Max*2];

void add(){
	memset(c,0,sizeof(c));
	int num=0;
	for(int i=0;i<1002;++i){
		c[i]=a[i]+b[i];
		num=(c[i]==0?num:num+1);
	}
	if(num==0){
		cout<<"0 0"<<endl;
		return ;
		
	}
	int flag=1;
	for(int i=1002;i>=0;--i){
		if(c[i]){
			if(flag){
				flag=0;	
				cout<<c[i]<<" "<<i;
			}else{
				cout<<" "<<c[i]<<" "<<i;
			}
		}
	}
	cout<<endl;
	
}

void chenji(){
	memset(c,0,sizeof(c));
	int has=0;
	
	for(int i=0;i<Max;++i){
		if(a[i]!=0){
			for(int j=0;j<Max;++j){
				if(b[j]!=0){
					c[i+j]+=(a[i]*b[j]);
					has=1;
				}
			}
			
		}
	}
	if(has){
		int falg=1;
		for(int i=2*Max;i>=0;--i){
			if(c[i]){
				 if(falg){
				 	falg=0;
				 	cout<<c[i]<<" "<<i;
				 }else{
				 	cout<<" "<<c[i]<<" "<<i;
				 }
			}
		}
		cout<<endl;
	}else{
		cout<<"0 0\n";
		return ;
	}
	
	
}

int main(){
	int n,x,y,m;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(c));
	memset(c,0,sizeof(c));
	cin>>n;
	
	for(int i=0;i<n;++i){
		cin>>x>>y;
		a[y]=x;
	}
	
	cin>>m;
	
	for(int i=0;i<m;++i){
		cin>>x>>y;
		b[y]=x;
	}
    chenji();
	add();
	
	
	return 0;
}


