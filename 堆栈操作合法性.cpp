/*
���ӣ�https://pintia.cn/problem-sets/434/problems/5891 
������S��X�ֱ��ʾ��ջ�ͳ�ջ�������������һ������S��X���ɵ����У�
��һ���ն�ջ���в�������Ӧ���������У���û�г���ɾ��ʱջ�գ������״̬Ҳ��ջ�գ�
��Ƹ������ǺϷ��Ķ�ջ�������С����д��������S��X���У��жϸ������Ƿ�Ϸ���

�����ʽ:
�����һ�и�������������N��M������N�Ǵ������еĸ�����M����50���Ƕ�ջ�����������
���N�У�ÿ���и���һ������S��X���ɵ����С����б�֤��Ϊ�գ��ҳ��Ȳ�����100��

�����ʽ:
��ÿ�����У���һ�������YES����������ǺϷ��Ķ�ջ�������У���NO������ǡ�

����������
4 10
SSSXXSXXSX
SSSXXSXXS
SSSSSSSSSSXSSXXXXXXXXXXX
SSSXXSXXX
���������
YES
NO
NO
NO


˼·�����ⲻ��Ҫɵ������ģ�⣬ֱ����һ��size �������Ϳ����ˣ�
ֻ��Ҫ��ע��û�г�ջʱΪ�գ����߽�ջʱΪ�������ǽ�ȥ�������size>maxszie�� 

*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m,size;
	cin>>n>>m;
	size=0;
	string str;
	int len;
	int flag=0;
	while(n--){
		cin>>str;//Ҳ���Բ����ַ�������char[] �Ͼ��ַ�������char[]   ->char chs[n]   len=strlen(ch)
		len=str.length();
		flag=1;
		size=0;
		for(int i=0;i<len;++i){
			if(str[i]=='S'){//��ջ 
				size++;
				if(size>m){//�����Ѿ������ֱ���˳��˴β����жϣ��������� 
					flag=0;
					break;
				}
			}
			else{
				if(size>=1){//��ջ ջ������Ҫ���ٻ���һ�������ܳ� 
					size--;
				}
				else{//����ֱ���˳� 
					flag=0;
					break;
				}
			}
		}
		if(flag&&size==0){//������Ҫ��ģ��������ûʧ�� --> flag==1�����ұ������ҪջΪ��  --> size==0 
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
} 
