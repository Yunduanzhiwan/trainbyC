#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str;
	ios::sync_with_stdio(false);
	cin>>str;
	int len=str.length();//得到字符串的长度 
	
	int tlen=len;
	int falg=0;
	while(tlen){//最长回文子串长度，默认最大 
		for(int i=0;i+tlen<=len;++i){//找到 tlen长度的子串的初始下标 
			falg=1;//初始相同，认为当前子串是回文 
			for(int j=0;j<tlen/2;++j){ // 3  7     3 4 5 6 7  判断回文只需要判断 前 tlen/2个 
				if(str[i+j]!=str[(i+tlen-1)-j]){// 遇到不相同，进入下一个长度不变的子串 
					falg=0; //不是 
					break;//结束当前判断进入下一个判断 
				}
			}
			//找到了 
			if(falg){
				cout<<tlen<<endl;
				return 0; 
			}
		}
		tlen--;
	}
	return 0;
} 
