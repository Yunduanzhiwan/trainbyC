/*
һ�������������ĳ̶ȡ�
����Ϊ�������а���2�ĸ�������λ���ı�ֵ��
���������Ǹ�������̶�����0.5����������Ǹ�ż����
��������1������������-13142223336�Ǹ�11λ����������3��2��
�����Ǹ�����Ҳ��ż���������ķ����̶ȼ���Ϊ��3/11��1.5��2��100%��
ԼΪ81.82%��������������һ���������������ж����

*/ 
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	string str;
//	scanf("%s",&str);
	cin>>str;
//	printf("xxx-> %s\n",str);
	cout<<str<<endl;
	int len=str.length();
	double point=0;
	int len2=0;
	int reslen=0;
	for(int i=0;i<len;++i){
		if(str[i]=='2'){
			++len2;
		}
		if(str[i]>='0'&&str[i]<='9'){
			++reslen;
			
		}
	} 
//	cout<<"reslen="<<reslen<<" len2="<<len2<<endl;
	point=1.0*len2/reslen*(str[0]=='-'?1.5:1)*((str[len-1]-'0')%2==0?2:1);
	printf("%.2lf%\n",point*100);
	
	return 0;
}
