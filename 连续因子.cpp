#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;


//L1-006 �������� (20��)
/*
һ�������� N �������п��ܴ����������������֡�
���� 630 ���Էֽ�Ϊ 3��5��6��7������ 5��6��7 ���� 3 �����������֡�
������һ������ N��Ҫ���д���������������ӵĸ������������С�������������С�

�����ʽ��
������һ���и���һ�������� N��1<N<2
?31
?? ����

�����ʽ��
�����ڵ� 1 �������������ӵĸ�����Ȼ���ڵ� 2 ���а� 
����1*����2*����*����k �ĸ�ʽ�����С�������������У�
�������Ӱ�����˳�������1 �������ڡ�

*/
long long n;
int main(){
	cin>>n;
	int len=0;
	int tlen;
	int t,start;
	int sqr=sqrt(n);

	for(int i=2;i<=sqr;++i){
		t=1;
		for(int j=i;t<=n;++j){
			t*=j;
			tlen=j-i+1;
			if(n%t==0&&tlen>len){
				len=tlen;
				start=i;
			}
		} 
	
	} 
	if(len==0){
		len=1;
		start=n;
	}
	cout<<len<<endl;
	cout<<start;
	for(int i=1;i<len;++i){
		cout<<"*"<<(start+i);
	}
	return 0;
}

//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	unsigned int n,pro,lenth=0,first=0;
//	scanf("%d",&n);
//	//ֱ�Ӵ���ϰ���ӿ�ʼ�㣬 �� 3*5*6*7 ֱ��5*6*7  
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		pro=1;
//		cout<<"i="<<i<<endl;
//	for(int j=i;pro*j<=n;j++)
//	{
//		pro=pro*j;
//		cout<<"j="<<j<<" pro="<<pro<<endl; 
//		if(n%pro==0&&j-i+1>lenth)
//		{
//			first=i;
//			lenth=j-i+1;
//		}
//	}
//}
//if(lenth==0)
//{
//	lenth=1;
//	first=n;
//	
//}
//printf("%d\n",lenth);
//printf("%d",first);
//for(int k=1;k<lenth;k++)
//printf("*%d",first+k);
//}

