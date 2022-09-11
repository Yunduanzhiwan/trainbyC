#include<iostream>
#include<string.h>
#include<map>
typedef unsigned long long ll;
using namespace std;

inline ll read(){
    ll x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
inline string readstr()//inline继续加快速度
{
	char ch=getchar();
	string st1="";
	while (!((ch>='a')&&(ch<='z')))//把前面没用的东西去掉,当然,ch在什么范围内可以依据需要修改 
	  ch=getchar();
	while ((ch>='a')&&(ch<='z')) 
	  st1+=ch,ch=getchar();
	return st1;//返回
}//在主程序内可以写st=read(),这样子要读的字符串就到了st内
int main(){
	ll n,k;
//	scanf("%d %d",&n,&k);
//	cin>>n>>k;
	n=read();
	k=read();
//	cout<<"n="<<n<<"k="<<k<<endl;
	string str;
//	char str[n];
//	char chs[k];
	map<char,int> m;
//	cin>>str;
//	scanf("%s",str);
	str=readstr();
	char ch;
	for(ll i=0;i<k;++i){
		scanf("%c",&ch);
		getchar();
		m[ch]=1;
		
	//	cout<<"m["<<ch<<"]="<<m[ch]<<endl;
	}
	ll resnum=0;
	
	int falg=0;
	for(ll i=0;i<n;++i){
		falg=0;
		if(m[str[i]]==1){
				falg=1;
				resnum++;
		}else{
			continue;
		}
		for(ll j=i+1;j<n;++j){
			
			if(m[str[j]]==1&&falg==1){
				resnum++;
			}
			else{
				break;
			//	if(falg)falg=0,resnum++;
			}
		}
	}
	printf("%lld\n",resnum);
	return 0;
}
