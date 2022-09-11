#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;
ll str=0;
ll len;
char ch[22];
int s;
ll pp;
ll getsum(int ln){
	int res=0;
		for(int i=0;i<ln;++i){
			res+=(ch[i]-'0');
		}
	if(res<0)res=0;
	return res;
}
void solve(){
	str=0;
	memset(ch,0,sizeof(ch));
	
	scanf("%s %d",&ch,&s);
	len=strlen(ch);
	pp=1;
	int t=getsum(len);
	
	if(t<=s){
		printf("0\n");
		return;
	}
	
	//字符串反转  原因：因为要进为  如： 500 -> 1000   反转后 005 -> 0001 
	char cht;
	for(int i=0;i<len/2;++i){//123465
		cht=ch[i];
		ch[i]=ch[len-i-1];
		ch[len-i-1]=cht;
	} 
	
	for(int i=0;i<len;++i){
		str+=((10-(ch[i]-'0'))*pp);
		t=t-(ch[i]-'0')+1; 
		ch[i]='0';
		ch[i+1]+=1;
		pp*=10;//根据*10得到该位的十进制上的值 
		if(i+1>=len){//进位  
			len+=1;
			ch[i+1]='1';
			
		}
		//t=getsum(len);  -->t=t-(ch[i]-'0')+1;  更改后 ac通过时间从 1400ms ->93ms 

		//t=t-(ch[i]-'0')+1; 
		if(t<=s){
			break;
		}
	}
	printf("%lld\n",str);
}

int main(){
	int n;
	cin>>n;
	while(n--)
		solve();//solve解决方案 
	return 0;
} 
