#include<iostream>
#include<string.h>
using namespace std;
const int MAXN=1e6+2,d=5e5;
bool q[MAXN]={};
int main(){
	int n,m;
	int t;
	while(scanf("%d %d",&n,&m)!=EOF){
	memset(q,0,sizeof(q));
		for(int i=0;i<n;++i){
			scanf("%d",&t);
			q[t+d]=1;
		}
		for(int i=MAXN-1;m>0&&i>=0;i--){
			if(q[i]!=0){
				if(m>1){
					printf("%d ",i-d);
						m--; 
				}else{
					printf("%d\n",i-d);
					break;
				}
			
			}
		}
	}

	return 0;
}
//
//#include<cstdio>
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N=1e6+2,d=5e5;//500000
//bool q[N];
//int main()
//{
//	int n,m,t;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		memset(q,0,sizeof(q));//多组输入，需要初始化 
//		for(int i=0;i<n;i++)
//		{
//			scanf("%d",&t);
//			q[t+d]=1;
//		}
//		for(int i=N-1;i>=0;i--)
//		{
//			if(q[i])
//			{
//				if(m>1)
//				{
//					printf("%d ",i-d);
//					m--;
//				}
//				else
//				{
//					printf("%d\n",i-d);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
