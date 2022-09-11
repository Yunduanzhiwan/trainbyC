#include<iostream>
#include<math.h>
#include<cstring> 
using namespace std;
int  has(string s,char *b,int lenb){
	int lens=s.length();
	int res=0;
	for(int i=0;i<lenb;++i){
		
		char c=b[i];
		int 	idx=s.find(c);//在a中查找b.
		if(idx==string::npos)//不存在。
		{
			res++;
		}
	}

return res;

}

int MP(char *res,string find){//从后匹配 
	int reslen=	strlen(res);
	int findlen=find.length();
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
		//	cout<<"匹配成功 i= "<<i+1<<endl;
			return i+1;
			break;
		}
	}
	return -1;
}
int main(void){
	int w,l;
	cin>>w>>l; 
//	char *c=new char[l];
	char c[l];
	for(int i=0;i<l;++i){
		cin>>c[i];
	}
	string  s[w];
	for(int i=0;i<w;++i){
		cin>>s[i];
	}
	int max=l;
	for(int i=0;i<w;++i){
		if(MP(c,s[i])){
		int t=has(s[i],c,l);
		cout<<"在里面"<<s[i]<<endl;
		if(t<max){
			max=t;
			}
		} 

	}
	cout<<max<<endl;
	
	return 0;
} 
