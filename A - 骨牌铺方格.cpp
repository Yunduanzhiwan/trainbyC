//��2��n��һ�������η�����,��һ��1�� 2�Ĺ�����������,����n ,����̷ŷ���������.
//����n=3ʱ,Ϊ2�� 3���񣬹��Ƶ��̷ŷ���������,����ͼ��

#include<iostream>
using namespace std;
int main(){
	 
	 unsigned long long num[55];
	 num[1]=1;num[2]=2;
	 for(int i=3;i<=50;++i){
	 	num[i]=num[i-1]+num[i-2];
	 }
	 int ans;
	 while(scanf("%d",&ans)!=EOF){
	 	printf("%lld\n",num[ans]);
	 }
	return 0;
} 
