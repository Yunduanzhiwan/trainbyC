#include<iostream>
#include<string.h>
using namespace std;
#define MAX 1000+10
int main(){
	int n,h,m,num,cou,sum;
	char c;
	int time[MAX];
	int vis[MAX];
	scanf("%d",&n);
	while(n--){
		 cou=sum=0;
		 memset(time,0,sizeof(time));//每次归零
		 memset(vis,0,sizeof(vis));
		while(scanf("%d %c %d:%d",&num,&c,&h,&m)!=EOF&&num){//0借书
			if(c=='S'){//借书，但是不一定还书了，所以，还书才++cou
				vis[num]=1;
				time[num]=h*60+m;//转换为分钟   借书时间 
			}else if(c=='E'&&vis[num]){//需要加 vis 表示，你过来还书，但是前提是借书过，才能还，否则忽略
				vis[num]=0;//还书
				sum+=h*60+m-time[num]; //读书时间
				cou++;//还书成功，读书本数+1
			}
		}
		printf("%d %d\n",cou,(int)(1.0*sum/(cou==0?1:cou)+0.5));//(cou==0?1:cou)  cou为0，会除法错误，因，cou是0，所以sum一定为0，所以  sum/1==
	}
	return 0;
} 
