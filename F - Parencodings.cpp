#include<iostream>
#include<math.h> 
#include<stdlib.h>
#include<string.h>
using namespace std;
const int maxn=22;
int c[maxn*2]={};//0 Ϊ��1Ϊ������   ��¼���ű���  
int p[maxn]={};//p���� 
int w[maxn]={};//s���� 
int main(){
	int n;
	cin>>n;
	while(n--){
		memset(c,0,sizeof(c));
		memset(p,0,sizeof(p));
		memset(w,0,sizeof(w));
		int num;
		cin>>num;
		int sum=0; //����Ϊ0�� 
		for(int i=1;i<=num;++i){
			int t;
			cin>>t;
			p[i]=t;
			
			int ts=p[i-1];//��¼����ж�������   ��ǰ������ȥ�ϴ�Ϊ������ ���������� 
			
			for(int j=0;j<t-ts;++j){//��������� 
				c[sum++]=0;
			}
			c[sum++]=1;	//��������� 
					
			//����w
			/*
			�ӵ�ǰ��ʼ�������������ŵ�����
			�������������������ƥ��ɹ���
			��ǰ��¼��������������w�ı����� 
			*/ 
			int resz=0; 
			int resy=0;
			for(int ss=sum-1;ss>0;--ss){
				if(c[ss]==1){//����������ţ���++ 
					resy++;
				}else {
					resz++;
					if((resz==resy)){
					break;
					}
				}
				 
			}
			//��¼w���� 
			 w[i]=resy;
		}
	/*
	
	����������1 ��ʼ 
	*/	
		for(int i=1;i<=num;++i){
			cout<<w[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
