#include<iostream>
#include<math.h> 
#include<stdlib.h>
#include<string.h>
using namespace std;
const int maxn=22;
int c[maxn*2]={};//0 为左，1为右括号   记录括号编码  
int p[maxn]={};//p编码 
int w[maxn]={};//s编码 
int main(){
	int n;
	cin>>n;
	while(n--){
		memset(c,0,sizeof(c));
		memset(p,0,sizeof(p));
		memset(w,0,sizeof(w));
		int num;
		cin>>num;
		int sum=0; //重置为0； 
		for(int i=1;i<=num;++i){
			int t;
			cin>>t;
			p[i]=t;
			
			int ts=p[i-1];//记录左边有多少括号   当前数量减去上次为这次添加 的左括号数 
			
			for(int j=0;j<t-ts;++j){//填充左括号 
				c[sum++]=0;
			}
			c[sum++]=1;	//填充右括号 
					
			//编码w
			/*
			从当前开始，计算左右括号的数量
			若左右括号数量相等则匹配成功，
			当前记录的右括号数就是w的编码数 
			*/ 
			int resz=0; 
			int resy=0;
			for(int ss=sum-1;ss>0;--ss){
				if(c[ss]==1){//如果是右括号，则++ 
					resy++;
				}else {
					resz++;
					if((resz==resy)){
					break;
					}
				}
				 
			}
			//记录w编码 
			 w[i]=resy;
		}
	/*
	
	结果输出，从1 开始 
	*/	
		for(int i=1;i<=num;++i){
			cout<<w[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
