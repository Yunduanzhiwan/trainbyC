#include<iostream>
#include<string.h>
using namespace std;
#define MAX 1000+10
int main(){
	int n,h,m,num,cou,sum;
	char c;
	int time[MAX];
	int vis[MAX];
	scanf("%d",&n);
	while(n--){
		 cou=sum=0;
		 memset(time,0,sizeof(time));//ÿ�ι���
		 memset(vis,0,sizeof(vis));
		while(scanf("%d %c %d:%d",&num,&c,&h,&m)!=EOF&&num){//0����
			if(c=='S'){//���飬���ǲ�һ�������ˣ����ԣ������++cou
				vis[num]=1;
				time[num]=h*60+m;//ת��Ϊ����   ����ʱ�� 
			}else if(c=='E'&&vis[num]){//��Ҫ�� vis ��ʾ����������飬����ǰ���ǽ���������ܻ����������
				vis[num]=0;//����
				sum+=h*60+m-time[num]; //����ʱ��
				cou++;//����ɹ������鱾��+1
			}
		}
		printf("%d %d\n",cou,(int)(1.0*sum/(cou==0?1:cou)+0.5));//(cou==0?1:cou)  couΪ0�������������cou��0������sumһ��Ϊ0������  sum/1==
	}
	return 0;
} 
