/*
字符串和模式串的匹配算法


1.MP算法
2.sunday 算法 
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
			//参与的下一位在不在字符串里面
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
			cout<<"找到了 i= "<<i-findlen;
			return i-findlen;
			break;
		}
	} 
	
	
	return -1;
}
int MP(char *res,char *find){//从后匹配 
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
			//移动的位数 =坏字符在模式串中的位置 - 坏字符在模式串中最右出现的位置。此外，如果"坏字符"不包含在模式串之中，则最右出现位置为-1
			//j=(i-falg);//向后移动 
			i=i+(j-falg);
			j=findlen-1;
		}
		if(j==-1){
			cout<<"匹配成功 i= "<<i+1<<endl;
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
