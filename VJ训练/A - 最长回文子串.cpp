#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str;
	ios::sync_with_stdio(false);
	cin>>str;
	int len=str.length();//�õ��ַ����ĳ��� 
	
	int tlen=len;
	int falg=0;
	while(tlen){//������Ӵ����ȣ�Ĭ����� 
		for(int i=0;i+tlen<=len;++i){//�ҵ� tlen���ȵ��Ӵ��ĳ�ʼ�±� 
			falg=1;//��ʼ��ͬ����Ϊ��ǰ�Ӵ��ǻ��� 
			for(int j=0;j<tlen/2;++j){ // 3  7     3 4 5 6 7  �жϻ���ֻ��Ҫ�ж� ǰ tlen/2�� 
				if(str[i+j]!=str[(i+tlen-1)-j]){// ��������ͬ��������һ�����Ȳ�����Ӵ� 
					falg=0; //���� 
					break;//������ǰ�жϽ�����һ���ж� 
				}
			}
			//�ҵ��� 
			if(falg){
				cout<<tlen<<endl;
				return 0; 
			}
		}
		tlen--;
	}
	return 0;
} 
