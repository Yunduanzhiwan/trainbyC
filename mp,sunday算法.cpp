/*
�ַ�����ģʽ����ƥ���㷨


1.MP�㷨
2.sunday �㷨 
*/ 

#include<iostream>
#include<string.h>
using namespace std;
int sunday(char *res,char *find){
	int reslen=	strlen(res);
	int findlen=strlen(find);
	int i=0;
	int j=0;
	int t=findlen; 
	while(i<reslen&&j<findlen){
		if(res[i]==find[j]){
			++i;
			++j;
		}else{
			//�������һλ�ڲ����ַ�������
			int falg=0;
			for(int k=findlen-1;k>=0;--k){
				if(res[t]==find[k]){
					falg=findlen-k;//3 2
					break;
				}
			}
			if(falg==0){
				i=t+1;
			}else{
				i=i+falg;
			}
			t=i+findlen;
			j=0;
		}
		if(j==findlen){
			cout<<"�ҵ��� i= "<<i-findlen;
			return i-findlen;
			break;
		}
	} 
	
	
	return -1;
}
int MP(char *res,char *find){//�Ӻ�ƥ�� 
	int reslen=	strlen(res);
	int findlen=strlen(find);
	int i=findlen-1;
	int j=findlen-1;
	
	int q=-1;
	while(i<reslen&&j>-1){
		if(res[i]==find[j]){
			--i;
			--j;
		}else{
			int falg=-1;
			for(int k=0;k<findlen;++k){
				if(res[i]==find[k]){
					falg=k;
				}
			}
			//�ƶ���λ�� =���ַ���ģʽ���е�λ�� - ���ַ���ģʽ�������ҳ��ֵ�λ�á����⣬���"���ַ�"��������ģʽ��֮�У������ҳ���λ��Ϊ-1
			//j=(i-falg);//����ƶ� 
			i=i+(j-falg);
			j=findlen-1;
		}
		if(j==-1){
			cout<<"ƥ��ɹ� i= "<<i+1<<endl;
			return i+1;
			break;
		}
	}
	return -1;
}
int main(){
	//bbc abcdab abcdabcdabde
	char a[]="here is a example";//abcdefghijk  This is a wonderful city  here is a example
	char b[]="exampl";//bxcd     wonder  example
	int res=sunday(a,b);
	
	cout<<"res= "<<res<<endl;
	cout<<"a= "<<a[res]<<endl;
	for(int i=0;i<strlen(b);i++){
		cout<<a[i+res];
	}
	return 0;
}
