#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
typedef long long ll;
//inline ll read(){
//   ll s=0,w=1;
//   char ch=getchar();
//   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
//   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
//   return s*w;
//}

    char chin;  
    int ain=0;  
inline ll in()  
{  	ain=0;  
    while(!(((chin=getchar())>='0')&&(chin<='9')));  //����getchar���룬�ٶȿ졣
    ain*=10;ain+=chin-'0';  
    while(((chin=getchar())>='0')&&(chin<='9'))ain*=10,ain+=chin-'0';  //������ASCII��תΪint ����
    return ain;  
}
//��д
inline void out(ll a)
{
    if(a>=10)out(a/10);
    putchar(a%10+'0');
}

int main(){
	ios::sync_with_stdio(false);
	long long n;
	n=in();
//	scanf("%lld",&n);
	long long a,b,x,y,ans,maxmin,temp;
	long long ta,tb;
	while(n--){
		a=in();
		b=in();
		x=in();
		y=in();
		ans=in();
//		scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&ans);
//		cin>>a>>b>>x>>y>>ans;
		maxmin=a*b;
		if((a-x)+(b-y)>=ans){
			ta=a-ans;
			if(ta<x)ta=x;//������С�� 

			tb=b-(ans-(a-ta));// ta��ȥ�� a-ta   ʣ��ans-(a-ta)
			if(tb<y)tb=y;//������С��
			
			maxmin=ta*tb;//��С�ˣ�
			
			//�ұ߼���
			tb=b-ans;
			if(tb<y)tb=y;
			ta=a-(ans-(b-tb));
			if(ta<x)ta=x;
			
			if(maxmin>(ta*tb))maxmin=ta*tb; 
			 
			
		}else{
			maxmin=x*y;
		}
	//	out(maxmin);
//		cout<<maxmin<<endl;
		printf("%lld\n",maxmin);
	}
	
	return 0;
} 
