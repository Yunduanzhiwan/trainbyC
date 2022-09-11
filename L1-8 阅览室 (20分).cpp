#include<algorithm>
#include<stdio.h>
#define MAX 1000+10
char shu[MAX];
int hh[MAX];
int mm[MAX];
int jie;
double time;
int main(){
	int T;
	scanf("%d",&T);
	char c;
	int s,h,m;
	time=0;
	while(T){
		T--;
		
		for(int i=0;i<MAX;++i){
			shu[i]='Q';
			hh[MAX]=-1;
			mm[MAX]=-1;
		}
		time=0;
		jie=0;
		
		while(true){
			scanf("%d %c %d:%d",&s,&c,&h,&m);
			if(s==0){
				if(jie)
					printf("%d %.lf\n",jie,ceil(time/jie));
					//cout<<jie<<" "<<(ceil(time/jie))<<endl;
				else printf("0 0\n");
				break;
			}
			if(c=='S'){//借书 
				shu[s]=c;
				hh[s]=h;
				mm[s]=m;
			}
			else if(c=='E'&&shu[s]=='S'){//还书   &&有借有还 
				++jie;
				
				if(m>=mm[s]){
					time+=(m-mm[s]);
					time=time+(h-hh[s])*60; 
				}else{
					time=time+m+60-mm[s];
					time=time+(h-hh[s]-1)*60;
				}
			}
		}
	}
}
