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
	
	//�ַ�����ת  ԭ����ΪҪ��Ϊ  �磺 500 -> 1000   ��ת�� 005 -> 0001 
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
		pp*=10;//����*10�õ���λ��ʮ�����ϵ�ֵ 
		if(i+1>=len){//��λ  
			len+=1;
			ch[i+1]='1';
			
		}
		//t=getsum(len);  -->t=t-(ch[i]-'0')+1;  ���ĺ� acͨ��ʱ��� 1400ms ->93ms 

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
		solve();//solve������� 
	return 0;
} 
